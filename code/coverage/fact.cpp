#include <iostream>
#include "fact.h"

int fact(int n){
  if (n < 2)
    return 1;
  if (n>500 && n<1000){
    std::cout << "This is never run from tests\n";
    return 100;
  }
  
  else
    return n * fact(n-1);
}

