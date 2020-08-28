#include <iostream>
#include <string>
#include <math.h>

double freqs[] = {8.167,1.49,2.782,4.253,12.702,2.228,2.015,6.094,6.966,0.153,0.772,4.025,2.406,6.749,7.507,1.929,0.095,5.987,6.327,9.056,2.758,0.978,2.360,0.150,1.974,0.07};


std::string encode(std::string s, int r){
  char c;
  std::string result="";
  /*  I forgot to set i to 0 in the loop so it just kept it's value from before!!!! */
  for (int i = 0  ; i < s.length(); ++i) {
    c = s[i];
    if (c >= 'a' && c<='z'){
      c  = c - 'a';
      c = (c + r)%26;
      c = c + 'a';
    }
    else if (c >= 'A' && c<='Z'){
      c  = c - 'A';
      c = (c + r)%26;
      c = c + 'A';
    }
    result = result + c;
  } 
  return result;
}

void stupid_decoder(std::string s){
  int i;
  std::string decoded;
  for (i = 0; i < 26; ++i) {
    decoded = encode(s,i);
    std::cout << i << " : " <<  encode(s,i) << "\n";
  }
}

double distance(double a[], double b[], int len){
  double sum = 0;
  for (int i = 0; i < len; ++i) {
    sum = sum + (b[i] - a[i]) * (b[i] - a[i]);
  }
  return sqrt(sum);
}

int count_letters(std::string s, char c){
  int count = 0;
  for (int i = 0; i < s.length(); ++i) {
    if (s[i]==c)
      count++;
  }
  return count;
}
std::string decode(std::string s, double freqs[]){
  std::string test_string;
  int total_letters;
  double test_vector[26];
  double min_dist = 1000;
  double min_index = 0;
  int i,j;
  double test_distance;
  double d;
  
  // count the letters in our source string
  total_letters = s.length();
  for (i = 0; i < s.length(); ++i) {
    // we really want to subtract out all non letter characters
    if (!isalpha(s[i]))
      total_letters--;
  }
  for (i = 0; i < 26; ++i) {
    // encode the new test string
     test_string = encode(s,i);
     //    figure out the frequencies for the new test string
     for (j = 0; j < 26; j++) {
       d  = 1.0*count_letters(test_string,'a'+j) / total_letters;
       test_vector[j] = d;
     }
    
     //    calc its distance from the real freq vector
     test_distance = distance(freqs,test_vector,26);
     // if this vector is closer, it's the new minimum so save the value and index
     if (test_distance < min_dist){
       min_dist = test_distance;
       min_index = i;
     }

  }
  // at this point i is the index of the rotation which seems
  // to be most like an English sentence.
  std::string decoded = encode(s,min_index);
  return decoded;
}

int main()
{
  int i;
  std::string s = "gzzgiq kgin jge cozn gt ktznayogys atqtuct zu sgtqotj";
  // stupid_decoder(s);
  std::string decoded = decode(s,freqs);
  std::cout <<  "Decoded: " << decoded << "\n";

  s = "hello world";
  decoded = decode(s,freqs);
  std::cout <<  "Decoded: " << decoded << "\n";

  s = "mary has a little lamb";
  decoded = decode(s,freqs);
  std::cout <<  "Decoded: " << decoded << "\n";
  
  return 0;
}
