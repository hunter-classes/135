#include <iostream>
#include "mathfuncs.h"


int main()
{
  std::cout << "Hello\n";
  int result = add_two(5,10);
  std::cout << result << "\n";
  result = add_three(5,10,15);
  std::cout << result << "\n";
  return 0;
}

