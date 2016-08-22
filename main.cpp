#include "Node.h"
#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv){
  Node * tail;
  Node *head = new Node();
  srand(time(NULL));
  int size = (rand() % 1000) + 5, total = 0, count = 0;
  cout << "Total Size: " << size << endl;
  head->setValue(0);
  tail = head;
  Node *newNode = new Node();
  for(int i = 1; i < size; i++){
    Node *newNode = new Node();
    newNode->setValue(i);
    newNode->setNext(NULL);
    tail->setNext(newNode);
    tail = newNode;
  }
  cout << head->getNext()->getValue() << " ";
  Node *cur = head;
  while(cur != NULL){
    count += cur->getValue();
    cout << cur->getValue();
    cur = cur->getNext();
    total++;
  }
  cout << "Tracked " << total << " nodes, with a total count of " << count << endl;
  cout << "Deleted " << total << "nodes ends.";
  return 0;
}
