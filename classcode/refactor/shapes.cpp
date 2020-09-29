#include <iostream>


std::string line(int width, char c){
  std::string l = "";
  for (int i = 0; i < width; ++i) {
    l = l + c;
  }

  return l;
}

std::string box(int width, int height){
  std::string result = "";

  for (int h = 0;h < height;h++) {
    result = result + line(width,'*') + "\n";
  }
return result;
}

std::string lower_triangle(int height){
  std::string result = "";

  for (int h = 0;h < height;h++) {
    result = result + line(h+1,'*') + "\n";
  }
return result;
}


std::string upper_triangle(int height){
  std::string result = "";
  for (int i = 0; i < height; i++) {
    result = result + line(i,' ') + line(height-i,'*')+"\n";
      }
  return result;
}


std::string trap(int width, int height){
  std::string result = "";
  int stars = width;
  for (int level = 0; level < height; level++) {
    result = result + line(level,' ')+ line(stars,'*') + "\n";
    stars = stars - 2;
    
  }

  
  return result;
}


int main(){

  std::string r;

  r = box(5,4);
  std::cout << "A 4 high 5 wide box\n";
  std::cout << r;
  std::cout << "\n\n";
    
  r = lower_triangle(5);
  std::cout << "A 5 height triangle\n";
  std::cout << r;
  std::cout << "\n\n";
    
  r = upper_triangle(5);
  std::cout << "A 5 height triangle\n";
  std::cout << r;
  std::cout << "\n\n";
    
  r = trap(12,5);
  std::cout << "A 12,5 trap\n";
  std::cout << r;
  std::cout << "\n\n";
    
  return 0;
}
