#include <iostream>

#include "fact.h"

int main()
{
  std::cout << "In main\n";
  int n = fact(5);
  std::cout << "5 fact is " << n << "\n";
  return 0;
}
