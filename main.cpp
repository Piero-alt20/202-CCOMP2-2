#include <iostream>
/*ingresa 10 numeros por teclado al array y muestra el promedio*/
/*crea una funcion que reciba un array de 10 y que muestro el mayor y el menor*/
/*crea una funcion que reciba un arreglo y que esta funcion lo invierta*/
using namespace std;

invertir(int arr[], int n){
    cout <<"[";
    for(int i=n-1;i>=0;i--)
        cout << arr[i];
    cout << "]";
}

int main()
{
    /*int numero[10];
    int suma=0;
    for(int i; i<10; i++){
        cout << "ingresa un valor"<<endl;
        cin>>numero[i];
        suma+=numero[i];
    }
    cout << suma%10 << endl;
*/

    int numero[5];
    for(int i; i<5; i++){
        cout << "ingresa un valor"<<endl;
        cin>>numero[i];
    }
    invertir(numero,5);
    return 0;
}
