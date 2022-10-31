#include <iostream>
#include <vector>
#include <cstdlib>
#include  <algorithm>
void print_vector(std::vector<int> v){
  for (auto i : v) {
    std::cout << i << ", ";
  }
  std::cout << "\n";
  
}

std::vector<int> build_vector(int size){
  std::vector<int> v;

  for (int i = 0; i < size; i++) {
    v.push_back(rand()%30);
    
  }

  return v;
}

int freq(std::vector<int> v, int val){
  int count = 0;
  for (int i : v){
    if (i==val)
      count++;
  }
  return count;
}

int mode(std::vector<int> v){
  int mode_so_far = v[0];
  int freq_so_far = freq(v,v[0]);

  for (int i = 1; i < v.size();i++){
    int f = freq(v,v[i]);
    if (f>freq_so_far){
      freq_so_far = f;
      mode_so_far = v[i];
    }
    
  }
  
  
  return mode_so_far;
}


int main(int argc, char *argv[])
{
  int size = std::atoi(argv[1]);
  srand(time(0));
  std::vector<int> v;
  v = build_vector(size);
  //print_vector(v);
  std::cout << mode(v) << "\n";
  return 0;
}
