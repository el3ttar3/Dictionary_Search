#include <iostream>
#include "LinkedList.h"


LinkedList::LinkedList() : head(nullptr) {}

void LinkedList::insert_end(const std::string& sample) {
    Node* newInserted = new Node(sample);
    Node* tempfetcher = head;

    if (head == nullptr) {head = newInserted;}
    else {
        while (tempfetcher->next != nullptr) {tempfetcher = tempfetcher->next; }
        tempfetcher->next = newInserted;
    }
    newInserted->next = nullptr;
}

bool LinkedList::search(const std::string& prefix) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->val == prefix) {return true; }
        temp = temp->next;
    }
    return false;
}

Vector LinkedList::start_with(const char keychar) {
    Vector result(0);
    Node* temp = head;

    while (temp != nullptr)
    {
        std::string tempstr=temp->val;
        if ( tempstr[0] == keychar) {result.pushbackV3(temp->val); }
        temp = temp->next;
    }
    return result;
}


