#include "Vector.h"
#include <iostream>

Vector::Vector(int s) 
{
    size = (s > 1) ? s : 1;
    arr = new int[size];
    for (int i{ 0 }; i < size; i++) { arr[i] = 0; }
}

void Vector::printVector() { for (int i{ 0 }; i < size; i++) { std::cout << arr[i] << " "; } }

void Vector::find(int value) { for (int i{ 0 }; i < size; i++) { if (arr[i] == value) { std::cout << "The Element Found At Index: " << i << std::endl; } } }

void Vector::addSize() { size++; }

void Vector::pushbackV1(int val) {
    if (size == 0 || arr[size - 1] != 0) { addSize(); }
    arr[size - 1] = val;
}

void Vector::pushbackV2(int val) {
    int newsize = size + 1;
    int* temparr = new int[newsize];
    
    for (int i{ 0 }; i < size; i++) { temparr[i] = arr[i]; }
    temparr[size] = val;
    
    std::swap(arr, temparr);
    delete[] temparr;
}

void Vector::push_back(int val) {
        if (size == capacity) {
            capacity *= 2;
            int* newArr = new int[capacity];

            for (int i = 0; i < size; ++i) { newArr[i] = arr[i]; }
            
            std::swap(arr, newArr);
            delete[] newArr;
        }
        arr[size++] = val;
    }

int Vector::getValue(int idx) { return (0 <= idx && idx < size) ? arr[idx] : -1; }

int Vector::getFront() { return (size > 0) ? arr[0] : -1; }

int Vector::getBack() { return (size > 0) ? arr[size - 1] : -1; }

void Vector::insert_at(int idx, int value) {
    if (idx >= 0 && idx < size) {
        if (arr[idx] == 0) { arr[idx] = value; }
        else {
            addSize();
            for (int i{ size - 1 }; i != idx; i--) { arr[i] = arr[i - 1]; }
            arr[idx] = value;
        }
    }
    else {
        pushbackV1(value);
    }
}

Vector::~Vector() {
    delete[] arr;
    arr = nullptr;
}
