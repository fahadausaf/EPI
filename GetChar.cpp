/* getchar example : typewriter */

#include <iostream>
using namespace std;

int gettok(){
  static int LastChar = ' ';
  cout << "Type a program" << endl;

  // Skip any whitespace.
  while (isspace(LastChar))
    LastChar = getchar();

  return 1;
}

int main ()
{
  /*
  int c;
  cout << "Enter text. Include a dot ('.') in a sentence to exit:" << endl;
  do {
    c=getchar();
    //putchar (c);
  } while (c != '.');
  */

  gettok();
  return 0;
}
