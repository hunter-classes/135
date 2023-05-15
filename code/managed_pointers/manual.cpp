#include <iostream>
#include <string>

class pt{
private:
  int x,y;
public:
  pt() {
    this->x = 0;
    this->y = 0;
  }
  pt(int x, int y){
    this->x = x;
    this->y = y;
  }
  ~pt() {
    std::cout << "In the destructor for " << this->toString() << "\n";
  }
  std::string toString(){
    return "<" + std::to_string(x) + "," + std::to_string(y) + ">";
  }
  
};
  
void f(){
  pt mypoint(10,20);

  pt *p = new pt(1,2);
  
  std::cout << mypoint.toString() << "\n";
  std::cout << p->toString() << "\n";

  std::cout << "About to return from f\n";
  delete p;
}


int main(){
  f();
  std::cout << "returned from f\n";
  return 0;
}
