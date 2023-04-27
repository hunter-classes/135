#include <iostream>
#include <assert.h>
#include "stdlib.h"

#ifdef DEBUG
#define LOG(X) std::cout << X << std::endl;
#else
#define LOG(X)
#endif

int fact(int n){
  if (n==0)
    return 1;
  else
    return n * fact(n-1);
}

int f3(int a){
  int x;
  
  x = a;

  if( x> 700832 && x < 8000000)
    abort();
  return a+20;
  
}

int f2(int a){
  int z;
  z = a;
  if (z%2==0)
    return f2(z+1);
  else
    return f3(z);
  
}

int f(int a){
  int x;
  x = x + f2(x);
  return x;
  
}

struct mystruct {
  int a;
  double d;
  int stuff[10];
};

int main(int argc, char *argv[])
{
  LOG("HELLO");
    int a,i,b;
  struct mystruct s1;
  struct mystruct *ps;

  ps = &s1;

  s1.a=100;
  s1.d=20.3;
  s1.stuff[3]=100;
  s1.stuff[5]=20;
  
  a = 20;
  int ar[10];
  

for (i = 0; i < 10; ++i) {
    ar[i] = i*10;
  }


    
  for (i = 0; i < 15; ++i) {
    a = a + f(i);
    a = a * a;
    a = a - 5;
    b = a + i;
  }
  std::cout << fact(5) << "\n";
    
}
