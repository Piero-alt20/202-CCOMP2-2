#include "Integerarra.h"
#include <iostream>
Integerarra::Integerarra(int size)
{
    this->size = size;
    this->data = new int[size];
}

void Integerarra::setData(int val, int idx){
   if(idx >= 0 || idx < size){
    this->data[idx] = val;
   }
}

int Integerarra::getData(int idx) const{
   if(idx >=0 || idx < size){
    return this->data[idx];
   }
}

int Integerarra::getSize() const{
   return this->size;
}

void Integerarra::print() const {
  std::cout << " [ ";
  for(int i=0; i < size; i++){
    std::cout << this->data[i] << " ";
  }
  std::cout << " ] ";
}

Integerarra::~Integerarra()
{
    delete[] data;
}
