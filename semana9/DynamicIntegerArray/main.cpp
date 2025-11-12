#include <iostream>
#include "DynamicIntegerArray.h"
using namespace std;

int main()
{
    DynamicIntegerArray da;
    da.print();
    da.push_back(1);
    da.push_back(2);
    da.push_back(3);
    da.push_back(4);
    cout<<endl;

    int arr[] ={1,2,3,4,5};
    DynamicIntegerArray dia2(arr, 5);
    cout<< dia2.getSize()<< endl;
    return 0;
}
