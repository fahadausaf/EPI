#include <iostream>
using namespace std;

// count the number of bits in the number
short CountBits(unsigned int x){
  short num_bits = 0;
  while (x){
    num_bits += x & 1;
    x >>= 1;
  }
  return num_bits;
}

int main(){
  cout << "Chapter 1: Primitive Types" << endl;

  cout << "CountBits(5): " << CountBits(5) << endl;
  //cout << "Parity(7): " << Parity(7) << endl;
  //cout << "Parity2(7): " << Parity2(7) << endl;
  //cout << "Parity4(7): " << Parity4(7) << endl;
  return 0;
}
