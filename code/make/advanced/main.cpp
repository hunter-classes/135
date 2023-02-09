#include <iostream>

#include "funcs.h"
#include "morefuncs.h"

int main()
{
  std::cout << "Hello world!\n";
  int x = add2(5,8);

  std::cout << "5 + 8 = " << x << "\n";
  int y = add3(5,8,3);
  std::cout << "5 + 8 + 3 = " << y << "\n";
  int z = add4(5,8,3,7);
  std::cout << "5 + 8 + 3 + 7 = " << z << "\n";
  return 0;
}

