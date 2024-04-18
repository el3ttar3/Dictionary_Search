#pragma once
#include <iostream>

struct Node {
    int val;      // Value stored in the node
    Node* next;  // Pointer to the next node
    Node* prev;  // Pointer to the previous node

    Node(int value);

    void forward_while_print(Node* head);
    void forward_for_print(Node* head);
    void forward_rec_print(Node* head);

    void backward_while_print(Node* start, Node* head);
    void backward_for_print(Node* start, Node* head);
    void backward_rec_print(Node* goal);

    int search(int val, Node* head);
};

