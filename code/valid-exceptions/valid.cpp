#include <iostream>

int main()
{
  std::string s;
  double d;
  bool try_again = true;
  std::cout << "Enter a number:";
  while (try_again){
    std::getline(std::cin,s);
    try {
      d = std::stold(s);
      try_again = false; 
    } catch (std::exception e){
      std::cout << "Try again, enter a number:";
      try_again = true;
    }
  }
  
  std::cout << "You entered: " << d << "\n";
  return 0;
}
