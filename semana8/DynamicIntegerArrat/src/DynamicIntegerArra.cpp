#include "DynamicIntegerArra.h"
#include <iostream>

DynamicIntegerArra::DynamicIntegerArra()
{
    this->sz=0;
    this->data= new int[sz];
}
DynamicIntegerArra::DynamicIntegerArra(int arr[], int sz)
{
    this->sz=sz;
    this->data = new int[sz];
    for (int i=0; i<sz; i++)
        this->data[i]= arr[i];
}

int DynamicIntegerArra::getSize() const{
   return sz;
}

void DynamicIntegerArra::print() const {
    std::cout << "[ ";
    for(int i=0; i<sz; i++){
        std::cout<< this->data[i]<<" ";
}
   std::cout<<"]";
}

void DynamicIntegerArra::push_back(int val){
   int *tmp=new int [sz+1];
   for(int i=0; i<sz; i++)
    tmp[i]=this->data[i];
    tmp[sz] = val;
    sz++;
    delete[] data;
    this->data=tmp;
}
DynamicIntegerArra::~DynamicIntegerArra()
{
    delete[] data;
}
