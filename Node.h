#ifndef NODE_H
#define NODE_H
class Node{
public:
  Node();
  Node(const Node& orig);
  virtual ~Node();
  bool hasNext();
  Node *getNext();
  void setNext(Node *nextNext);
  int getValue();
  void setValue(int val);
private:
  Node *next;
  int value;
};
#endif
