#include <iostream>

using namespace std;

/** Implemente una funcion que reciba un arreglo de enteros
*y su tamaño y retorne la suma de los elementos de arreglo
*/
long sumar(int arr[],int tam){
int sum=0;
    for(int i = 0; i<tam; i++)
        sum = sum + arr[i];
    return sum;
}
int main()
{
    int arr[4];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;

    cout << arr[0] << endl;
    cout << "la suma es: " << sumar(arr, 4) << endl;

    return 0;
}
