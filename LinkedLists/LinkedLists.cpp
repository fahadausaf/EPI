#include <iostream>
using namespace std;

typedef struct IntElement {
  struct IntElement *next;
  int data;
} IntElement;

bool insertInFront(IntElement **head, int data){
  IntElement *newElem = new IntElement;
  if(!newElem) return fales;

  newElem->data = data;
  *head = newElem;
  return true;
}

int main(){
  IntElement* head = new IntElement;
  head->data = 0;
  head->next = NULL;

  insertInFront()
}
