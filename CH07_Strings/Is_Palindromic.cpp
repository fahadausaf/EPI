#include <iostream>
using namespace std;

bool IsPalindromic(string s){
  for(int i=0, j=s.size()-1; i<j; ++i, --j){
    if(s[i] != s[j]) {
      return false;
    }
  }
  return true;
}

int main(){

  string s1 = "fahad";
  string s2 = "ababa";

  cout << IsPalindromic(s1) << endl;
  cout << IsPalindromic(s2) << endl;
}
