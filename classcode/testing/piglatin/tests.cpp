#include <iostream>
#include "piglatin.h"
int main(int argc, char *argv[])
{
  std::string result;
  result = piglatinify("");
  if (result != "")
    std::cout << "Doesn't work for empty string\n";
  else
    std::cout << "Works for empty string\n";

  result = piglatinify("x");
  if (result != "xay")
    std::cout << "Dosn't work x\n";
  else
    std::cout << "Works for x\n";

  result = piglatinify("bob");
  if (result != "bobay")
    std::cout << "Dosn't work bob\n";
  else
    std::cout << "Works for bob\n";

  result = piglatinify("able");
  if (result != "bobay")
    std::cout << "Dosn't work able\n";
  else
    std::cout << "Works for able\n";

  
  
  return 0;
}
