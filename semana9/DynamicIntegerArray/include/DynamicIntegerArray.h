#ifndef DYNAMICINTEGERARRAY_H
#define DYNAMICINTEGERARRAY_H
#include <iostream>

class DynamicIntegerArray
{
    public:
        DynamicIntegerArray();
        DynamicIntegerArray(int arr[], int sz);
        DynamicIntegerArray(DynamicIntegerArray &o);

        int getSize() const;
        void print() const;

        void insert(int val, int pos);
        void remove (int pos);
        void push_back(int val);


        ~DynamicIntegerArray();



    private:
        int* data;
        int sz;
};

#endif // DYNAMICINTEGERARRA_H
