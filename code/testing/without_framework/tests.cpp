#include <iostream>

#include "fact.h"

int main()
{

  /*
    0! -> 1
    big number
    invalid inputs -> negatives, decimals, strings?
    regular values that we know 
  */
  int result;
  result = fact(0);
  if (result != 1){
    std::cout << "FAILED: 0! != " << result << "\n";
  } else{
    std::cout << "PASSED: 0!\n";
  }
  

  result = fact(1);
  if (result != 1){ 
    std::cout << "FAILED: 1! != " << result << "\n";
 } else{
    std::cout << "PASSED: 1!\n";
  }

  result = fact(3);
  if (result != 6){
    std::cout << "FAILED: 3! != " << result << "\n";
  } else{
    std::cout << "PASSED: 3 !\n";
  }

  
  
  return 0;
}
