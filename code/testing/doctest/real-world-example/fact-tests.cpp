#include "doctest.h"
#include "fact.h"

TEST_CASE("Factorial Base Cases"){
  CHECK(fact(0) == 1);
  CHECK(fact(1) == 1);
}

TEST_CASE("Factorial of small numbers"){
  CHECK(fact(2) == 2);
  CHECK(fact(3) == 6);
  CHECK(fact(4) == 24);
  
  for (int i = 3; i < 20; i++){
      CHECK(fact(i) == fact(i));
    }
}

TEST_CASE("Factorial of big numbers"){
  CHECK(fact(5) == 120);
}
