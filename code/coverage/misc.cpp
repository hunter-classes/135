
int sum(int a, int b) {
  int result=0;
  for (int i = a ; i <= b; i++){
    result = result + i;
  }
  return result;
  
}

int sumsq(int x) {
  int result = 0;
  for (int i = 0 ; i < x; i++){
    result = result + i*i;
  }
  return result;
    
}
