#include <iostream>


int smaller(int a, int b){
  if (a<b){
    return a;
  } else{
    return b;
    }
}

int main(int argc, char *argv[])
{
  int a = 5;
  int b = 10;

  int c = smaller(a,b);

  std::cout << c << std::endl;
  return 0;
}
