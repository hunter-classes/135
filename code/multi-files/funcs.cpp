#include "funcs.h"


int add3(int a, int b, int c) {
  return c+add2(a,b);
}

int add2(int a, int b) {
  int c;
  c = a + b;
  return c;
}

