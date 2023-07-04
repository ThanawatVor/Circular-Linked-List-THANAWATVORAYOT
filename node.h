// self-referential structure
#include <iomanip>
class Node {
private:
  int value;

  Node *nextPtr;
  Node *pPtr; // for doubly linked list
public:
  Node(int x = 0);
  ~Node();
  Node *get_next();
  int get_data();
  void set_next(Node *t);
  void print();
  void set_prev(Node *t);
  Node* get_prev();

};

typedef Node *NodePtr; // synonym for Node*

Node::Node(int x) {
  value = x;
  nextPtr = NULL;
  pPtr = NULL;
}

Node::~Node() { cout << value << " deleted" << endl; }

NodePtr Node::get_next() { return nextPtr; }

int Node::get_data() { return value; }

void Node::set_next(NodePtr t) {
  this->nextPtr = t; 
}

void Node::set_prev(NodePtr t)
{
  this->pPtr=t;
}

NodePtr Node::get_prev()
{
  return pPtr;
}

void Node::print(){
  cout << setw(3) << value;
}