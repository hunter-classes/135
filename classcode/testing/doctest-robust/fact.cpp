
#include "fact.h"

int fact(int n){

  if (n < 2)
    return 1;

  int prod = 1;
  for (int i = 1; i <= n; ++i)
    {
      prod = prod * i;
    }
  return prod;
  
}

