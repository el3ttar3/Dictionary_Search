#include <iostream>
#include "Vector.h"
#include "Node.h"

template<typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList();
    void insert_end(const std::string& sample);
    bool search(const std::string& prefix);
    Vector<T> start_with(const char keychar);
};