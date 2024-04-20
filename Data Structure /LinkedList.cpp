#include<iostream>
#include"Node.h"

class LinkedList{

private:
  Node*head;

public:

  LinkedList();
  void insert_end(const std::string sample);
  void search(const std::string &prefix);
  void start_with(const char keychar );

};
