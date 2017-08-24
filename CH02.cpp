#include <iostream>
#include <vector>

using namespace std;

void EvenOdd(vector <int>* A_ptr) {
  vector <int>& A = *A_ptr;
  int next_even = 0, next_odd = A.size() - 1;
  while (next_even < next_odd) {
    if (A[next_even] % 2 == 0) {
      ++next_even;
    } else {
      swap(A[next_even], A[next_odd --]);
    }
  }
}

int main(){
  cout << "Chapter 2: Arrays";

  //vector<int> A (1,4,7,9,2,5,8,3);

  return 0;
}
