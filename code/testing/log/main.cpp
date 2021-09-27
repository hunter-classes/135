#include <cstdio>
#include <iostream>


#ifdef LOGGING
  #define LOG(X) std::cerr << X << "\n";
#else
  #define LOG(X)
#endif


int main()
{
  std::cout << "Start of program\n";
  LOG("some testing or debugging or logging stuff");
  return 0;
}
