#include <iostream>
using namespace std;

// count the number of bits in the number
short CountBits(unsigned int x){
  short num_bits = 0;
  while (x){
    num_bits += x & 1;
    x >>= 1;
    //cout << "x: " << x << ", num_bits: " << num_bits << endl;
  }
  return num_bits;
}

// 1.1: Computing the Parity of a Word
short Parity(unsigned long x){
  short result = 0;while(x){
    result ^= (x & 1);
    x >>= 1;
  }
  return result;
}

short Parity2(unsigned long x){
  short result = 0;
  while (x){
    result ^= 1;
    x &= (x - 1);
  }
  return result;
}

int main(){
  cout << "Chapter 1: Primitive Types" << endl;

  cout << "CountBits(5): " << CountBits(5) << endl;
  cout << "Parity(7): " << Parity(7) << endl;
  cout << "Parity2(7): " << Parity2(7) << endl;
  return 0;
}
