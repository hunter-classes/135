
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "fact.h"
#include "doctest.h"

TEST_CASE("Factorial Base Cases") {
  CHECK(fact(0) == 1);
  CHECK(fact(1) == 1);
}


TEST_CASE("Factorial Small numbers") {
  CHECK(fact(2) == 2);
  CHECK(fact(3) == 6);
  CHECK(fact(4) == 24);
}

TEST_CASE("Factorial large numbers") { CHECK(fact(5) == 120); }
