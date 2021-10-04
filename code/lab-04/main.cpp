#include <iostream>

std::string line(int width, std::string c){
  std::string result = "";
  for (int i = 0; i < width ; i++){
    result = result + c;
  }
  return result;
}


std::string box(int width, int height){
  std::string result="";
  int w,h;
  for (h = 0; h < height; h++){
    result = result + line(width,"*") + "\n";
  }
  return result;
}

std::string tri1(int height){
  std::string result="";
  int h;
  for (h=0;h<height;h++){
    result = result + line(h+1,"*") + "\n";
  }
  
  return result;
}

std::string tri2(int height){
  std::string result = "";
  
  for (int h = 0; h < height; h++){
    result = result + line(height-h-1,"_");
    result = result + line(h+1,"*");
    result = result + "\n";
      
  }
  return result;
}

std::string trap(int width, int height){
  std::string result = "";
  int h;
  int w = width;
  for (h = 0; h < height; h++){
    result = result + line(h,"_");
    result = result + line(w,"*");
    w = w - 2;
    result = result + "\n";
  }
  
  
  return result;
}

int main(){
  std::string result;

  result = box(7,3);
  std::cout << "Box 7 3 \n\n";
  std::cout << result;
  std::cout << "\n";

  result = tri1(4);
  std::cout << "tri1 4 \n\n";
  std::cout << result;
  std::cout << "\n";

  result = tri2(4);
  std::cout << "tri2 4 \n\n";
  std::cout << result;
  std::cout << "\n";

  result = trap(8,4);
  std::cout << "trap 8 4 \n\n";
  std::cout << result;
  std::cout << "\n";

  return 0;
}
