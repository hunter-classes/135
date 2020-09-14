#include <iostream>

#include "funcs.h"
#include "funcs2.h"

int main()
{
  int result;

  result = add2(10,15);

  std::cout << result << "\n";

  result = add3(10,20,30);
  std::cout << result << "\n";
  return 0;
}
