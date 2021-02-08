#include <iostream>

#include "comparisons.h"

int main(int argc, char *argv[])
{
  int a = 50;
  int b = 10;

  int c = smaller(a,b);

  std::cout << c << std::endl;
  return 0;
}
