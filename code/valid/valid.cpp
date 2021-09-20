#include <iostream>
int main()
{
  int i;
  std::string s;
  double d;

  std::cout << "Enter something:";
  std::cin >> s;
  try {
    d = std::stold(s); // string to long double
    std::cout << "d : " << d << "\n";
    if (d==(int)d){
      std::cout << "d is an integer\n";
    } else {
      std::cout << "d is not an integer\n";
    }
  } catch (std::exception e) {
    std::cout << "the input wasn't a number\n";
    d = 0;
    
  }
  
  
}
