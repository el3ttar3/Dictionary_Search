#include "Node.h"

// Constructor 
Node::Node(int value) { val = value; }

// Forward view printing function (while)
void Node::forward_while_print(Node* head) {
    while (head != nullptr) {
        std::cout << head->val << " -> ";
        head = head->next;
    }
    std::cout << " nullptr " << std::endl;
}

// Forward view printing function (for)
void Node::forward_for_print(Node* head) {
    for (Node* curr = head; curr != nullptr; curr = curr->next) { std::cout << curr->val << " -> "; }
    std::cout << " nullptr " << std::endl;
}

// Forward view printing function (recursion)
void Node::forward_rec_print(Node* head) {
    if (head == nullptr) {
        std::cout << " nullptr " << std::endl;
        return;
    }
    std::cout << head->val << " -> ";
    forward_rec_print(head->next);
}

// Backward view printing function (while)
void Node::backward_while_print(Node* start, Node* head) {
    while (start != head) {
        std::cout << start->val << " -> ";
        start = start->prev;
    }
    std::cout << start->val << " -> nullptr " << std::endl;
}

// Backward view printing function (for)
void Node::backward_for_print(Node* start, Node* head) {
    for (; start != head; start = start->prev) {
        std::cout << start->val << " -> ";
    }
    std::cout << start->val << " -> nullptr " << std::endl;
}

// Backward view printing function (recursion)
void Node::backward_rec_print(Node* goal) {
    if (goal == nullptr) { return; }
    std::cout << goal->val << " -> ";
    backward_rec_print(goal->prev); 
}

// Search function return 1 if exist else -1 
int Node::search(int val, Node* head) {
    while (head != nullptr) {
        if (head->val == val) { return 1;  }
        head = head->next;
    }
    return -1; 
}
