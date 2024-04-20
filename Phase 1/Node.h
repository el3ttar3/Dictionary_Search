#pragma once
#include <iostream>
#include <utility>


struct Node {

    std::string val ; // Value stored in the node
    Node* next{nullptr};    // Pointer to the next node
    Node* prev{nullptr};    // Pointer to the previous node

    //Search For The Auto Suggestion (Explict and Move )
    explicit Node( std::string value) : val( std::move(value) ), next(nullptr), prev(nullptr) {}

    // Forward view printing function (while) , Search For Static Functions
    static void forward_while_print(Node* head) {
        while (head != nullptr) {
            std::cout << head->val << " -> ";
            head = head->next;
        }
        std::cout << " nullptr " << std::endl;
    }

    // Forward view printing function (for)
    static void forward_for_print(Node* head) {
        for (Node* curr = head; curr != nullptr; curr = curr->next) {std::cout << curr->val << " -> ";}
        std::cout << " nullptr " << std::endl;
    }

    // Forward view printing function (recursion)
    static void forward_rec_print(Node* head) {
        if (head == nullptr) {
            std::cout << " nullptr " << std::endl;
            return;
        }
        std::cout << head->val << " -> ";
        forward_rec_print(head->next);
    }

    // Backward view printing function (while)
    static void backward_while_print(Node* start, Node* head) {
        while (start != head) {
            std::cout << start->val << " -> ";
            start = start->prev;
        }
        std::cout << start->val << " -> nullptr " << std::endl;
    }

    // Backward view printing function (for)
    static void backward_for_print(Node* start, Node* head) {
        for (; start != head; start = start->prev) {std::cout << start->val << " -> ";}
        std::cout << start->val << " -> nullptr " << std::endl;
    }

    // Backward view printing function (recursion)
    void backward_rec_print(Node* goal) {
        if (goal == nullptr) { return; }
        backward_rec_print(goal->next);
        std::cout << goal->val << " -> ";
    }
};
