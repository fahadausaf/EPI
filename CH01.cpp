#include <iostream>
using namespace std;

short CountBits(unsigned int x){
  short num_bits = 0;
  while (x){
    num_bits += x & 1;
    x >>= 1;
    //cout << "x: " << x << ", num_bits: " << num_bits << endl;
  }
  return num_bits;
}

int main(){
  cout << "Chapter 1: Primitive Types" << endl;

  //short s = CountBits(5);
  cout << "CountBits: " << CountBits(5) << endl;
  return 0;
}
