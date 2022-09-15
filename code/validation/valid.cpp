#include <iostream>

int main()
{
  std::string s = "f123";
  int d;
  try{
    std::cout << "Tryng to convert to int\n";
    d = std::stold(s);
    std::cout << "Converted to int\n";
  } catch (std::exception e){
    std::cout << "we got an exception\n";
    std::cout << e.what() << "\n";
    d = -1;
  }
  std::cout << "after the try catch block\n";
  
  std::cout << d << "\n";

  
  return 0;
}
