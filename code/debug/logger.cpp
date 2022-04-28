#include <iostream>

#ifdef DEBUG
#define LOG(X) std::cerr << X << std::endl;
#else
#define LOG(X)
#endif

int main()
{
  std::cout << "STDOUT line 1\n";
  std::cout << "STDOUT line 2\n";
  std::cout << "STDOUT line 3\n";

  LOG("LOGGING")
  
    std::cout << "STDOUT line 4\n";
  std::cout << "STDOUT line 5\n";
  std::cout << "STDOUT line 6\n";
  std::cout << "STDOUT line 7\n";
  

  
  return 0;
}
