#include <iostream>

#include "fact.h"

int main()
{
  std::cout << "In the main program\n";
  for (int i=0; i < 10; ++i) {
    std::cout << "fact(" << i << ") = " << fact(i) << "\n";
  }
  return 0;
}
