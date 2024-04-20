#include <iostream>
#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

template<typename T>
void LinkedList<T>::insert_end(const std::string& sample) {    
    Node<T>* newInserted = new Node<T>(sample);
    Node<T>* tempfetcher = head;
    
    if (head == nullptr) { head = newInserted; }
    
    else {
        while (tempfetcher->next != nullptr) { tempfetcher = tempfetcher->next; }
        tempfetcher->next = newInserted;
    }
    
    newInserted->next = nullptr;
}

template<typename T>
bool LinkedList<T>::search(const std::string& prefix) {
    Node<T>* temp = head;
    while (temp != nullptr) {
        if (temp->val == prefix) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

template<typename T>
Vector<T> LinkedList<T>::start_with(const char keychar) {
    Vector<T> result;
    Node<T>* temp = head;
    while (temp != nullptr) {
        if (!temp->val.empty() && temp->val[0] == keychar) {
            result.pushbackV3(temp->val);
        }
        temp = temp->next;
    }
    return result;
}


