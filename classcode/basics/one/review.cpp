#include <iostream>

//int add2(int a, int b)
int add2(int, int);

int main()
{
  int c;
  std::cout << "Hello World!\n";

  c = add2(5,15.5);
  std::cout << "5+15 = " << c << std::endl;;
  return 0;
}


int add2(int a, int b){
  int c;
  c = a + b;
  std::cout << "In Func " << c << "\n";
  return c;
}
