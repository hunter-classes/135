#include <iostream>



#ifdef DEBUG
#define LOG(X) std::cout << X << std::endl;
#else
#define LOG(X)
#endif


int main()
{
  int a;
  a = 20;
  int b = a + 10;

  LOG(b);
  LOG("HELLO")
    
  return 0;
}
