#include <iostream>

#include "funcs.h"
#include "morefuncs.h"

int main()
{
  int c;

  c = inc(5);
  std::cout << "one more than 5 is " << c << "\n";


  c = add2(5,15);
  std::cout << "5 + 15  is " << c << "\n";
  c = add3(2,3,4);
  std::cout << c << "\n";

  return 0;
}
