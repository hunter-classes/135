#include <iostream>
#include <memory>



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


  std::shared_ptr<pt> p(new pt(100,200));
  std::cout << p->toString() << "\n";

  auto p2 = std::make_shared<pt> (50,78);
  std::cout << p2->toString() << "\n";

  auto p3 = std::make_shared<pt> ();
  std::cout << p3->toString() << "\n";
  
  
  // notice that we don't have to do the delete manually  
}
  
int main(int argc, char *argv[])
{
  std::cout << "In main at the start\n";
  f();
  //  in a real program we'd do a whole bunch more here
  std::cout << "In main at the end\n";
  return 0;

}
