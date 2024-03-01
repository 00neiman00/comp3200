//
// Created by seoulrobotics on 24. 3. 1.
//

#ifndef COMP3200_MYSTRING_H
#define COMP3200_MYSTRING_H


class MyString {
public:
    MyString();

    ~MyString();

private:
    char *str;
    int len;
    int capacity;
};


#endif //COMP3200_MYSTRING_H
