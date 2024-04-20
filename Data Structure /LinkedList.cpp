#include<iostream>
#include"LinkedList.h"

LinkedList::LinkedList() {head {nullptr} ; }

void insert_end(const std::string sample){  
  Node*newInserted=New Node(sample);
  Node*tempfetcher=head;
  if (head==nullptr){ head=newInserted; }
  while(tempfetcher->next!=nullptr){ tempfetcher=tempfetcher->next; }
  tempfetcher->next=newInserted;
  newInserted->next=nullptr;
}

bool search(const std::string &prefix){
  bool Flag{false};
  while (head!=nullptr){
    if (head->val == prefix ) {
      Flag=true;
      break;
    }
    head=head->next;
  }
  return Flag;
}

Vector start_with(const char keychar ){
  Vector result;
  while (head!=nullptr){
    if (head->val [0] == char ) {result.pushbackV3(head->val)}
    head=head->next;
  }
  return result;
}

