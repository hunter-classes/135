#include <iostream>

#include "lib.h"
#include "util.h"

int main()
{
  int c,d;
  c = add2(5,10);
  std::cout << c << "\n";
  
  d = add3(5,10,15);
  std::cout << d << "\n";
  return 0;
}
