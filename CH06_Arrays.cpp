#include <iostream>
#include <vector>

using namespace std;

void EvenOdd(vector <int>* A_ptr) {
  vector <int>& A = *A_ptr;
  int start = 0, end = A.size() - 1;
  while (start < end) {
    if (A[start] % 2 == 0) {
      ++start;
    } else {
      swap(A[start], A[end --]);
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

typedef enum { RED, WHITE, BLUE } Color;

void DutchFlagPartition_0(int pivot_index, vector<Color>* A_ptr) {
  vector<Color>& A = *A_ptr;
  Color pivot = A[pivot_index];
  // First pass: group elements smaller than pivot
  for(int i = 0; i < A.size(); ++i){
    // Look for a smaller element.
    for (int j = i + 1; j < A.size(); ++j){
      if(A[j] < pivot){
        swap(A[i], A[j]);
        break;
      }
    }
  }
  // Second pass: group elements larger than pivot.
  for (int i = A.size() - 1; i >= 0 && A[i] >= pivot; --i){
    // look for a larger element. Stop when we reach an element less
    // than pivot, since first pass has moved them to the start of A.
    for (int j = i - 1; j >= 0 && A[j] >= pivot; --j) {
      if (A[j] > pivot) {
        swap(A[i], A[j]);
        break;
      }
    }
  }
}

void DutchFlagPartition(int pivot_index, vector<Color>* A_ptr) {
  vector<Color>& A = *A_ptr;
  Color pivot = A[pivot_index];

  int smaller = 0, equal = 0, larger = A.size();
  while (equal < larger) {
    if (A[equal] < pivot) {
      swap(A[smaller++],A[equal++]);
    }
    else if(A[equal] == pivot){
      ++equal;
    }
    else{
      swap(A[equal], A[--larger]);
    }
  }
}

void DutchFlagPartitionTest(){
  std::vector<Color> v;
  v.push_back(RED);
  v.push_back(WHITE);
  v.push_back(BLUE);
  v.push_back(BLUE);
  v.push_back(WHITE);
  v.push_back(BLUE);
  v.push_back(RED);
  v.push_back(WHITE);
  v.push_back(RED);

  vector<Color>::iterator i = v.begin();
  while(i != v.end()){
    cout << "value of i = " << *i << endl;
    i++;
  }

  DutchFlagPartition(4, &v);

  cout << "--------------------------" << endl;
  vector<Color>::iterator j = v.begin();
  while(j != v.end()){
    cout << "value of j = " << *j << endl;
    j++;
  }

}


int main(){
  cout << "Chapter 2: Arrays" << endl;
  //EvenOddTest();
  DutchFlagPartitionTest();
  return 0;
}