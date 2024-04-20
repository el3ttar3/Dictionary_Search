#include "Vector.h"
#include <iostream>

template<typename T>
Vector<T>::Vector(int s) : size (s > 1 ? s : 1) , capacity(s > 1 ? s : 1), arr(new T[capacity]) { for (int i{ 0 }; i < size; ++i) { arr[i] = T(); } }

template<typename T>
void Vector<T>::printVector() { for (int i = 0; i < size; ++i) { std::cout << arr[i] << " "; } }

template<typename T>
void Vector<T>::find(T value) {
   
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            std::cout << "The Element Found At Index: " << i << std::endl;
            return;
        }
    }
    std::cout << "Element not found." << std::endl;
}

template<typename T>
void Vector<T>::addSize() {
    size++;
    if (size >= capacity) {
        capacity *= 2;
        T* newArr = new T[capacity];
        for (int i = 0; i < size - 1; ++i) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }
}

template<typename T>
void Vector<T>::pushbackV1(T val) {
    if (size == 0 || arr[size - 1] != 0) { addSize();}
    arr[size - 1] = val;
}

template<typename T>
void Vector<T>::pushbackV2(T val) {
    addSize();
    arr[size - 1] = val;
}

template<typename T>
void Vector<T>::pushbackV3(T val) {
    if (size == 0 || arr[size - 1] != 0) {
        addSize();
    }
    arr[size - 1] = val;
}

template<typename T>
T Vector<T>::getValue(int idx) {
 return (0 <= idx && idx < size) ? arr[idx] : T();  }

template<typename T>
T Vector<T>::getFront() { return (size > 0) ? arr[0] : T();  }

template<typename T>
T Vector<T>::getBack() { return (size > 0) ? arr[size - 1] : T();  }

template<typename T>
void Vector<T>::insert_at(int idx, T value) 
{
    if (idx >= 0 && idx < size) {
        if (arr[idx] == 0) {
            arr[idx] = value;
        }
        else {
            addSize();
            for (int i = size - 1; i != idx; i--) {
                arr[i] = arr[i - 1];
            }
            arr[idx] = value;
        }
    }
    else {
        pushbackV1(value);
    }
}

template<typename T>
Vector<T>::~Vector() {
    delete[] arr;
    arr = nullptr;
}

template class Vector<int>;
