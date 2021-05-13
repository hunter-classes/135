#include <iostream>


class pt {
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
    std::cout << "In the pt destructor\n";
  }
  
  // THIS IS NOT IDIOMATIC C++, it's Java style 
  std::string toString(){
    return "<" + std::to_string(x) + "," + std::to_string(y) + ">";
  }
  
  
};

void f() {
  pt * p = new pt();
  std::cout << p->toString() << "\n";
  // at this point we're done with the memory
  // that was allocated and pointed to with p
  delete p;
  
  
}
  
int main(int argc, char *argv[])
{
  std::cout << "In main at the start\n";
  f();
  //  in a real program we'd do a whole bunch more here
  std::cout << "In main at the end\n";
  return 0;

}
