//
// Created by seoulrobotics on 24. 3. 1.
//

#include "MyString.h"

MyString::MyString() : len(0), capacity(15) {
    str = new char[capacity + 1];
}

MyString::~MyString() {
    delete[] str;
}

void foo() {
    MyString name;
}

int main() {
    foo();
    return 0;
}