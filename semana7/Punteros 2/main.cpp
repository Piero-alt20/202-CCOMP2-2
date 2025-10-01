#include <iostream>

using namespace std;

int main()
{
    int* ptr1;
    int x =10;
    ptr1=&x;

    cout << *ptr1 << endl;
    *ptr1 = 1000;
    cout << x << endl;

    int *ptr2 = &x;
    *ptr2 = 5000;
    cout << x << endl;
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;

    double z = 1.54;
    double *ptr3 = &z;
    *ptr3 = 1.54;
    cout << z << endl;

    return 0;
}
