
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "fact.h"
#include "misc.h"
#include "doctest.h"

TEST_CASE("Factorial Tests") {
  CHECK(fact(1)==1);
  CHECK(fact(5)==20);
  CHECK(fact(101)==99999);
}

TEST_CASE("Misc tests") {
  CHECK(sum(0,3)==6);  
}


