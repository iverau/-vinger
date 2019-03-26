#include "LinkedList.h"
#include <iostream>
#include <memory>
using namespace std;


std::ostream& LinkedList::operator<<(std::ostream& os, const Node& node){
  cout << node.getValue() << endl;
}


// The insert function takes a pointer to node (pos) and a string (value). It creates a new
// node which contains value. The new node is inserted into the LinkedList BEFORE the
// node pointed to by pos.
LinkedList::Node* LinkedList::LinkedList::insert(Node *pos, const std::string& value){
  pos = new Node(value,static_cast<std::unique_ptr<Node>>(pos),pos->getPrev());
  return pos;
}



// The remove function takes a pointer to a node, and removes the node from the list. The
// function returns a pointer to the element after the removed node.
LinkedList::Node* LinkedList::LinkedList::remove(Node* pos){
  if(pos == nullptr || pos == end()){
    cout << "ikke gjør dette..." << endl;
    return nullptr;
  }
  if(pos == begin()){
    head = std::move(pos->next);
    head->prev = nullptr;
    return begin();
  }
  //ellers:
  auto ret = pos->getNext();
  pos->next->prev = pos->prev;

  pos->prev->next = std::move(pos->next);
  return ret;
}

// The remove function takes a string and removes the first node which contains the value.
void LinkedList::LinkedList::remove(const std::string& value){
  auto node = find(value);
  if(node != end()){
    remove(node);
  }
}

LinkedList::Node* LinkedList::LinkedList::find(const std::string& value){
  auto node = begin();
  while(node != end() && node->value != value){
    node = node->getNext();
  }
  return node;
}

std::ostream & LinkedList::operator<<(std::ostream & os, const LinkedList& list){
  auto node = list.begin();
  while(node != list.end()){
    os << node;
    node = node->getNext();
  }
  return os;
}
