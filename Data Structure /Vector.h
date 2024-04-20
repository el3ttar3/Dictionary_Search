#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    int size{ -1 };
    int* arr{ nullptr };
    int capacity{ -1 };

public:
    Vector(int s);
    void printVector();
    void find(int value);
    void addSize();
    void pushbackV1(int val);
    void pushbackV2(int val);
    void pushbackV3(int val);
    int getValue(int idx);
    int getFront();
    int getBack();
    void insert_at(int idx, int value);
    ~Vector();
};

#endif // VECTOR_H
