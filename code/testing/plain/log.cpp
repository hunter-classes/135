#include <iostream>


#ifdef USELOG
#define LOG(x) std::cerr << x << "\n";
#else
#define LOG(x)
#endif

int main()
{

  std::cout << "cout 1\n";
  std::cerr << "cerr 1\n";
  std::cout << "cout 2\n";
  std::cerr << "cerr 2\n";
  std::cout << "cout 3\n";

  LOG("HELLO WORLD");
  return 0;
}
