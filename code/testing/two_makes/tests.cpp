#include <iostream>
#include "piglatinify.h"


int main()
{
  // Test for empty string
  std::string result;

  std::cout << "Testing empty string\n";
  result = piglatinify("");
  if (result==""){
    std::cout << "Success\n\n";
  } else {
    std::cout << "Failure\n\n";
  }
  
  std::cout << "Testing single letter\n";
  if (piglatinify("a") == "a" &&
      piglatinify("b") == "b"){
    std::cout << "Success\n\n";
  } else {
    std::cout << "Failure\n\n";
  }

  std::cout << "Testing single vowel words\n";
  if (piglatinify("able") == "ableyay"){
    
    std::cout << "Success\n\n";
  } else {
    std::cout << "Failure\n\n";
  }
  
  
  return 0;
}
