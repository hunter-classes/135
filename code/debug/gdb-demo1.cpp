#include <iostream>
int prod(int max){
  int prod = 1;
  int i;
  for (i=1;i<max;i++){
    prod = prod * i;
  }
  return prod;
}


int main()
	 {
	   int sum = 0;
	   int prod_sum = 0;
	     
	   int i;
	   for (i=0;i<20;i++){
	     sum = sum + i;
	     prod_sum = prod_sum + prod(i);
	   }

	   std::cout << sum << "\n";
	   std::cout << prod_sum << "\n";
	   return 0;
	 }
