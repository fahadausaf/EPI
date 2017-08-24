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

void EvenOddTest(){
  std::vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(5);
  v.push_back(6);
  v.push_back(8);
  v.push_back(11);
  v.push_back(13);

  vector<int>::iterator i = v.begin();
  while(i != v.end()){
    cout << "value of i = " << *i << endl;
    i++;
  }

  EvenOdd(&v);

  cout << "EvenOdd" << endl;
  i = v.begin();
  while(i != v.end()){
    cout << "value of i = " << *i << endl;
    i++;
  }
}

int main(){
  cout << "Chapter 2: Arrays" << endl;
  EvenOddTest();
  return 0;
}
