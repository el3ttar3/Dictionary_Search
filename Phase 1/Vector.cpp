#include "Vector.h"
#include <iostream>

//Check here => Done
Vector::Vector(int s) : size (s > 1 ? s : 1) , capacity(s > 1 ? s : 1), arr(new std::string[capacity]) { }

void Vector::printVector() { for (int i = 0; i < size; ++i) { std::cout << arr[i] << " "; } }

void Vector::find(const std::string& value) {

    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            std::cout << "The Element Found At Index: " << i << std::endl;
            return;
        }
    }
    std::cout << "Element not found." << std::endl;
}

void Vector::addSize() {
    size++;
    if (size >= capacity) {
        capacity *= 2;
        auto* newArr = new std::string[capacity];
        for (int i = 0; i < size - 1; ++i) {newArr[i] = arr[i];}
        delete[] arr;
        arr = newArr;
    }
}

void Vector::pushbackV1(const std::string& val) {
    if (size == 0 || !arr[size - 1].empty()) { addSize(); }
    arr[size - 1] = val;
}

void Vector::pushbackV2(const std::string& val) {
    addSize();
    arr[size - 1] = val;
}

//Check here also
void Vector::pushbackV3(const std::string& val) {
    if (size == 0 || arr[size - 1].empty()) {addSize(); }
    arr[size - 1] = val;
}


std::string Vector::getValue(int idx) { return (0 <= idx && idx < size) ? arr[idx] : "";  }

std::string Vector::getFront() { return (size > 0) ? arr[0] : "";  }

std::string Vector::getBack() { return (size > 0) ? arr[size - 1] : "";  }

void Vector::insert_at(int idx, std::string& value)
{
    if (idx >= 0 && idx < size) {
        if ( arr[idx].empty() ) {arr[idx] = value;}
        else {
            addSize();
            for (int i = size - 1; i != idx; i--) {arr[i] = arr[i - 1];}
            arr[idx] = value;
        }
    }
    else {pushbackV3(value);}
}

Vector::~Vector() {
    delete[] arr;
    arr = nullptr;
}

