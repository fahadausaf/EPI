#include <iostream>
using namespace std;

void isalnum_test(){
  int var1 = 'd';
  int var2 = '2';
  int var3 = '\t';
  int var4 = ' ';
  if(isalnum(var1))
    cout << "var1 = |" << var1 << "| is alphanumeric" << endl;
  else
    cout << "var1 = |" << var1 << "| is not alphanumeric" << endl;

  if(isalnum(var2))
    cout << "var2 = |" << var2 << "| is alphanumeric" << endl;
  else
    cout << "var2 = |" << var2 << "| is not alphanumeric" << endl;

  if(isalnum(var3))
    cout << "var3 = |" << var3 << "| is alphanumeric" << endl;
  else
    cout << "var3 = |" << var3 << "| is not alphanumeric" << endl;

  if(isalnum(var4))
    cout << "var4 = |" << var4 << "| is alphanumeric" << endl;
  else
    cout << "var4 = |" << var4 << "| is not alphanumeric" << endl;
}

int main(){
  cout << "Tests File" << endl;
  isalnum_test();
  return 0;
}
