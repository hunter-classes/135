#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "fact.h"

TEST_CASE("Base Cases"){
  CHECK(fact(0)==1);
  CHECK(fact(1)==1);
}

TEST_CASE("Small numbers"){
  CHECK(fact(2)==2);
  CHECK(fact(3)==6);
  CHECK(fact(4)==24);
  
}

TEST_CASE("Big numbers"){
  CHECK(fact(5)==120);
  
}
