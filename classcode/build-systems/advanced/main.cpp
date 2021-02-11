#include <iostream>

#include "comparisons.h"
#include "adders.h"



int main(int argc, char *argv[])
{
  int a = 50;
  int b = 10;
  int d;
  int c = smaller(a,b);

  std::cout << c << std::endl;

  std::cout << add2(a,b) << std::endl;
  return 0;
}
