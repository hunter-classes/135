#include <iostream>

#define DOCTEST_CONFIG_IMPLEMENT

#include "doctest.h"

#include "fact.h"

int main() 
{
  std::cout << "calling fact(5) : " << fact(5) << "\n";
  return 0;
}
