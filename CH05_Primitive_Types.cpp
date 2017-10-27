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

// 5.1: Computing the Parity of a Word
short Parity(unsigned long x){
  short result = 0;
  while(x){
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

// 5.2: Swap bits
long SwapBits(long x, int i, int j) {
  // Extract the i-th and j-th bits, and see if they differ.
  if (((x >> i) & 1) != ((x >> j) & 1)){
    // i-th and j-th bits differ. We will swap them by flipping their values.
    // select the bits to flip with bit mask. since x^1 = 0 when x = 1 and 1
    unsigned long bit_mask = (1L << i) | (1L << j);
    x ^= bit_mask;
  }
  return x;
}

int main(){
  cout << "Chapter 1: Primitive Types" << endl;

  //cout << "CountBits(5): " << CountBits(5) << endl;
  //cout << "Parity(7): " << Parity(7) << endl;
  //cout << "Parity2(7): " << Parity2(7) << endl;

  cout << "SwapBits(73,1,6): " << SwapBits(73,1,6) << endl;

  return 0;
}
