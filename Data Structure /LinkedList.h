#include<iostream>
#include "Vector.h"
#include "Node.h"


class LinkedList{
private: 
 Node * head;

public:
  LinkedList();
  void insert_end(const std::string sample);
  bool search(const std::string &prefix);
  Vector start_with(const char keychar );

};

