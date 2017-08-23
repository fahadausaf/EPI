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

/*
short Parity3(unsigned long x){
  const int kMaskSize = 16;
  const int kBitMask = 0xFFFF;
  return precomputed_parity[x >> (3 * kMaskSize)] ^
         precomputed_parity[(x >> (2 * kMaskSize)) & kBitMask] ^
         precomputed_parity[(x >> kMaskSize) & kBitMask] ^
         precomputed_parity[x & kBitMask];
}
*/

short Parity4(unsigned long x) {
  x ^= x >> 32;
  x ^= x >> 16;
  x ^= x >> 8;
  x ^= x >> 4;
  x ^= x >> 2;
  x ^= x >> 1;
  return x & 0x1;
}

int main(){
  cout << "Chapter 1: Primitive Types" << endl;

  cout << "CountBits(5): " << CountBits(5) << endl;
  cout << "Parity(7): " << Parity(7) << endl;
  cout << "Parity2(7): " << Parity2(7) << endl;
  cout << "Parity4(7): " << Parity4(7) << endl;
  return 0;
}
