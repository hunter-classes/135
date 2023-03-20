#include <iostream>
#include "fact.h"

int main()
{
  std::cout <<"In the main\n";
  int result = fact(1);
  std::cout << result << "\n";
  result = fact(5);
  std::cout << result << "\n";
  
  return 0;
}
