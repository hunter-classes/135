#include <iostream>

// this is a "signature" for function add
// can write as: int add2(int,int);
// or can use other param names if we want
// but it's usually a cut and paste from the function name
// with the ; at the end 
int add2(int a, int b);


int main()
	 {
	   int c;
	   c = add2(5,10);
	   std::cout << c << "\n";
	   return 0;
	 }
