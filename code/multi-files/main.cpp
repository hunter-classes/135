#include <iostream>

int add2(int a, int b) {
  int c;
  c = a + b;
  return c;
}


int main()
{
  std::cout << "Hello world!\n";
  int x = add2(5,8);

  std::cout << "5 + 8 = " << x << "\n";
  return 0;
}
