#ifndef VECTOR_H
#define VECTOR_H

template <typename T>
class Vector {

private:
    int size{ -1 };
    T* arr{ nullptr };
    int capacity{ -1 };

public:

    Vector(int s);
    void printVector();
    void find(T value);
    void addSize();
    void pushbackV1(T val);
    void pushbackV2(T val);
    void pushbackV3(T val);
    T getValue(int idx);
    T getFront();
    T getBack();
    void insert_at(int idx, T value);
    ~Vector();
};

#endif // VECTOR_H
