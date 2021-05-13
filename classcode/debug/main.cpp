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

int main(int argc, char *argv[])
{
  int a,i,b;
  a = 20;
  int ar[10];
  

  LOG("HELLO");
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
