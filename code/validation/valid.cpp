#include <cstdio>
#include <iostream>

int main()
{
  std::string s;
  double d;
  int i;
  std::cin >> s;

  try {
    d = std::stold(s);
    std::cout << d << "\n";
  } catch (std::exception e) {
    std::cout << "Error\n";
    std::cout << e.what() << "\n";
  }

  std::cout << "after the try catch block\n";
  

  return 0;
}

