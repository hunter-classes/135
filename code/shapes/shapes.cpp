#include <iostream>

std::string line(int len, char c){
  std::string result = "";
  for (int i = 0; i < len; i++){
    result = result + c;
  }
  return result;
}

std::string box(int h, int w) {
  std::string result="";
  int row,col;
  for (row = 0; row < h; row++){
    result = result + line(w,'*')+"\n";
  }
  
  return result;
}

std::string ltriangle(int l) {
  std::string result = "";
  int row,col;
  for ( row = 0 ; row < l; row++){
    result = result + line(row+1,'*') + "\n";
  }
  return result;
}

std::string utriangle(int l) {
  std::string result = "";
  int row,col;
  for ( row = 0 ; row < l; row++){
    result = result + line(row,' ');
    result = result + line(l-row,'*');
    result = result + "\n";
  }
  return result;
}

std::string trap(int w, int h) {
  std::string result = "";
  int row;
  for (row = 0; row < h; row++){
    result = result + line(row, ' ');
    result = result + line(w,'*');
    w = w - 2;
    result = result + "\n";
  }
  
  return result;
}


int main()
{
  std::string result;

  result = box(4,3);
  std::cout << "Box\n--------\n";
  std::cout << result;
  std::cout << "\n--------------\n\n";


  result = ltriangle(6);
  std::cout << "ltriangle\n--------\n";
  std::cout << result;
  std::cout << "\n--------------\n\n";

  result = utriangle(6);
  std::cout << "utriangle\n--------\n";
  std::cout << result;
  std::cout << "\n--------------\n\n";

  result = trap(12,5);
  std::cout << "trap\n--------\n";
  std::cout << result;
  std::cout << "\n--------------\n\n";
  return 0;
}
