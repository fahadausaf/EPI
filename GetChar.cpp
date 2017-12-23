/* getchar example : typewriter */

#include <iostream>
using namespace std;

int main ()
{
  int c;
  cout << "Enter text. Include a dot ('.') in a sentence to exit:" << endl;
  do {
    c=getchar();
    //putchar (c);
  } while (c != '.');
  return 0;
}
