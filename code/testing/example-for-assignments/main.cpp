#include <iostream>
#include "fact.h"


int main()
{
  std::cout << "In main\n";
  int n = fact(3);
  std::cout << "3 fact is " << n << "\n";
  return 0;
}
