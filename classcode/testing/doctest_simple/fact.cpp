#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int fact(int n){
  if (n <2)
    return 1;
  else
    return 6;
}

TEST_CASE("Base"){
  CHECK(fact(0)==1);
  CHECK(fact(1)==1);
}

TEST_CASE("Simple"){
  CHECK(fact(2)==2);
  CHECK(fact(3)==6);
  CHECK(fact(4)==24);
  
}
