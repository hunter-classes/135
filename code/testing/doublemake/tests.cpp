#include <iostream>

#include "fact.h"

int main()
{
  std::cout << "In the tests\n";
  for (int i=0; i < 10; ++i) {
    std::cout << "TESTING: fact(" << i << ") = " << fact(i) << "\n";
  }
  return 0;
}
