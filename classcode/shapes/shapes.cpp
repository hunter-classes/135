#include <iostream>

std::string line(int length, std::string c){
  std::string result ="";
  for (int i = 0; i < length; i++) {
    result = result + c;
  }
return result;
}
std::string box(int width, int height){
  int i,j;
  std::string result = "";
  for (j = 0; j < height; j++) {
    result = result + line(width,"*") + "\n";
  }
  return result;
}

std::string lower_tri(int length){
  int i,j;
  std::string result="";
  for (i = 0; i < length; ++i) {
    result = result + line(i+1,"*") + "\n";
  }

  return result; 
}

std::string upper_tri(int length){
  int level;
  std::string result = "";
  for (level = 0; level < length; level++) {
    result = result + line(level," ") + line(length - level,"*") + "\n";
  }
  return result;
}

std::string trap(int width, int height){
  std::string result;
  int level;
  for (level = 0; level < height; level++) {
    result = result + line(level," ")+line(width,"*") + "\n";
    width = width - 2;
  }
  return result;

  
}

int main()
{
  std::string r;
  r = box(5,3);
  std::cout << r << "\n";

  r =lower_tri(6);
  std::cout << r << "\n";

  r =upper_tri(6);
  std::cout << r << "\n";

  r =trap(12,5);
  std::cout << r << "\n";


  return 0;
}
