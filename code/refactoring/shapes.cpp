#include <iostream>

std::string line(int width,std::string c){
  std::string result = "";
  for (int w = 0 ; w < width ; w++){
    result = result + c;
  }
  return result;
}


std::string box(int width, int height){
  std::string result = "";
  int w,h;
  for (h=0;h<height;h++){
    result = result + line(width,"*") +"\n";
  }
  return result;
}


std::string ltriangle(int height){
  std::string result="";
  int w,h;

  for (h=0;h<height;h++){
    result = result + line(h+1,"*") + "\n";
  }
  
  return result;
}
  
std::string utriangle(int height){
  std::string result = "";
  for (int h = 0; h < height; h++){
    result = result + line(h," ");
    result = result + line(height-h,"*");
    result = result + "\n";
  }
  return result;
}

std::string trap(int width, int height){
  std::string result = "";
  int stars = width;
  int spaces = 0;
  for (int h = 0; h < 5; h++){
    result = result + line(spaces," ");
    result = result + line(stars,"*");
    stars = stars - 2;
    spaces = spaces + 1;
    result = result + "\n";
  }
  
  return result;
}


int main(){
  std::string result;

  result = box(5,3);
  std::cout << result  << "\n";

  result = ltriangle(1);
  std::cout << result  << "\n";
  result = ltriangle(2);
  std::cout << result  << "\n";
  result = ltriangle(5);
  std::cout << result  << "\n";

  result = utriangle(5);
  std::cout << result  << "\n";

  result = trap(12,5);
  std::cout << result  << "\n";
  
  return 0;
}
