#include "adders.h"
#include "utils.h"

int multadd2(int a,int b,int c){
  int tmp = add2(a,b);
  return c*tmp;
}
