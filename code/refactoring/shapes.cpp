#include <iostream>

std::string line(char c,int w){
  std::string result = "";
  for (int i = 0; i < w; i++){
    result = result + c;
  }
  return result;
}

std::string box(int w, int h){
  std::string result = "";
  for (int i = 0; i < h; i++){
    result = result + line('*',w) + "\n";
  }
  return result;
}

std::string lower(int h){
  std::string result="";
  for (int i = 0; i < h; ++i) {
    result = result + line('*',i+1) + "\n";
  }
  return result;
}

std::string upper(int h){
  std::string result = "";
  for (int i = 0; i < h; ++i) {
    result = result + line(' ',i);
    result = result + line('*',h-i) + "\n";
  }
  return result;
}

std::string trap(int w,int h){
  std::string result = "";
  int stars = w;
  int spaces = 0;
  for (int i = 0; i < h; ++i) {
    result = result + line('.',spaces);
    result = result + line('*',stars) + "\n";
    spaces = spaces + 1;
    stars = stars - 2;
  }
  return result;
}




int main()
{
  std::string result;
  result = box(6,3);
  std::cout << result << "\n";
  std::cout << "--------------\n\n";
  result = lower(5);
  std::cout << result << "\n";
  std::cout << "--------------\n\n";
  result = upper(5);
  std::cout << result << "\n";
  std::cout << "--------------\n\n";
  result = trap(12,5);
  std::cout << result << "\n";
  
  return 0;
}
