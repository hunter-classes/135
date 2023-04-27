#include <iostream>
#include <unistd.h>


int main()
{
  int i;
  while(true){
    sleep(1);
    i++;
    std::cout << i << "\n";
  }
  return 0;
}
