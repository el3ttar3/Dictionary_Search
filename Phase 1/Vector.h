#ifndef UNTITLED_VECTOR_H
#define UNTITLED_VECTOR_H
#include<iostream>

class Vector {

private:
    int size{ -1 };
    std::string * arr{ nullptr };
    int capacity{ -1 };

public:

    //Search For This Auto Suggestion ( Explicit )
    explicit Vector(int s);
    void printVector();
    void find(const std::string& value);
    void addSize();
    void pushbackV1(const std::string &val);
    void pushbackV2(const std::string& val);
    void pushbackV3(const std::string& val);
    std::string getValue(int idx);
    std::string getFront();
    std::string getBack();
    void insert_at(int idx, std::string &value);
    ~Vector();
};



#endif //UNTITLED_VECTOR_H
