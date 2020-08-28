#include <iostream>

#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"

#include "fact.h"

int main()
{int i,x;
  for (i = 0; i < 24; ++i) {
    x = fact(i);
    std::cout << "i! = " << x << "\n";
  }

  return 0;
}
