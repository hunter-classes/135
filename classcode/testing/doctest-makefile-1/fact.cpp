
#include "doctest.h" // "" means look to the local folder for include files
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


TEST_CASE("Fact base cases"){
  CHECK(fact(0) == 1);
  CHECK(fact(1) == 1);
}


TEST_CASE("Fact small numbers"){
  CHECK(fact(2) == 2);
  CHECK(fact(3) == 6);
  CHECK(fact(4)  == 24);
}

TEST_CASE("Fact big numbers"){
  CHECK(fact(5) == 120);
}
