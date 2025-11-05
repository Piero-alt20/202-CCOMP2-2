#ifndef MYSTRING_H
#define MYSTRING_H
#include "MyString.h"
#include<iostream>

class MyString
{
    public:
        MyString(char *data);
        int getSize() const;
        char* getData() const;

        void toUpper();
        void toLower();
        ~MyString();


    private:
        int sz;
        char *data;
};

#endif // MYSTRING_H
