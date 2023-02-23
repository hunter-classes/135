#include "fact.h"


int fact(int n) {
  if (n < 2){
    return 1;
  } else {
    int result = 2;
    for (int i = n; n > 2; n = n - 1){
      result = result * n;
    }
    return result;

  }
}





