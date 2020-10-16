#include <iostream>

std::string encode(std::string s, int r){
  char c;
  std::string result="";

  for (int i = 0; i < s.length(); i++) {
    c = s[i];

    if ( c >= 'a' && c <= 'z'){
      c = c - 'a'; // shift the values down to 0
      c = (c+r)%26;
      c = c + 'a'; // shift the rotated value back up to the letters
    } else if (c >= 'A' && c<='Z'){
      c = c - 'A';
      c = (c+r)%26;
      c = c + 'A';
    }
    result = result + c;
  }
  return result;
}

int main()
{
  std::string input, rotated;

  input = "It was the best of times it was the worst of times";

  rotated = encode(input,3);
  std::cout << input << " : " << rotated << "\n";

  for (int i = 0; i < 26; i++) {
    std::string s = encode(rotated,i);
    std::cout << i << " : " << s << "\n";
      }
  return 0;
}
