#ifndef DYNAMICINTEGERARRA_H
#define DYNAMICINTEGERARRA_H
#include <iostream>

class DynamicIntegerArra
{
    public:
        DynamicIntegerArra();
        DynamicIntegerArra(int arr[], int sz);

        int getSize() const;
        void print() const;

        void push_back(int val);


        ~DynamicIntegerArra();



    private:
        int* data;
        int sz;
};

#endif // DYNAMICINTEGERARRA_H
