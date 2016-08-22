#include <stdio.h>
#include <ctype.h>
int main(){
  int n = 0;
  Node *num;
  printf("Enter size of array: ");
  scanf("%s\n",n );
  num = implement(n);
  return 0;
}

Node *newNodeArray(Node *nodeArray, int n){
  Node nodeArray;
  int num;
  int i = 0;
  while(i < n){
    printf("Enter a number: ");
    while(!scanf("%d", &num) != 1){
      clear_stream(stdin);
      printf("Invalid input. Please try again.\nEnter a number: ");
      fflush(stdout);
    }
    nodeArray.appendToTail(num);
    i++;
  }
  return nodeArray;
}
class Node {
  Node next = null;
  int data;
  public Node(int d){
    data = d;
  }
  void appendToTail(int d){
    Ndoe tail = new Node(d);
    Node n = this;
    while(n.next != null){
      n = n.next;
    }
    n.next = tail;
  }

  Node deleteNode(Node head, int d){
    Node n = head;
    /* moved head */
    if(n.data == d){
      return head.next;
    }
    /* head didnt change */
    while(n.next != null){
      if(n.next.data == d){
        n.next = n.next.next;
        return head;
      }
      n.n.next;
    }
    return head;
  }
}
