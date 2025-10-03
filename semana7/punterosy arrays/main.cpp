#include <iostream>

using namespace std;

/**
* el nombre de un arreglo es un puntero al primer elemento del arreglo
* ARITMETIICA DE PUNTEROS
* =======================
* A los punteros se les puede incrementar o decrementar usando los
* operadores ++/--, respectivamente
*
*
*/
int main()
{
    int arr[]={1,2,3,4,5};
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;

    int* ptr = arr;
    cout << *ptr << endl; // 1
    ptr++;
    cout << *ptr << endl; // 2
    ptr++;
    cout << *ptr << endl; // 3
    ptr++;
    cout << *ptr << endl; // 4
    ptr++;
    cout << *ptr << endl; // 5
    //por lo tanto se puede recorre los elementos de un
    //arreglo usando un puntero.

    int* ptr2 = arr;
    for(int i = 0; i < 5; i++, ptr2++)
        cout << *ptr2 << " ";
        cout << endl;
    int *ptr3 = arr+4;
    for(int i=0; i<5; i++, ptr3--)
        cout << *ptr3 << " ";
    cout << endl;

    int *ptr5 = arr;
    while(ptr5 < (arr+5)){
        cout << *ptr5 << " ";
        ptr5++;
    }
    cout << endl;
    int *ptr4 = arr+4;
    while(ptr4 >= (arr)){
        cout << *ptr4 << " ";
        ptr4--;
    }
    cout << endl;
    return 0;
}
