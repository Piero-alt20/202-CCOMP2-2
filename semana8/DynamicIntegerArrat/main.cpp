#include <iostream>
#include "DynamicIntegerArra.h"
using namespace std;

int main()
{
    DynamicIntegerArra dia;
    cout << dia.getSize() << endl;

    int arr[] ={1,2,3,4,5};
    DynamicIntegerArra dia2(arr, 5);
    cout<< dia2.getSize()<< endl;
    return 0;
}
