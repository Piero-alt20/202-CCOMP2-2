#include <iostream>

using namespace std;

/**
Punteros
========
es una variable que almacena direcciones de memoria de otra variable del mismo tipo
*
*Declaracion de puntero
   Tipo de dato *nombre de puntero
*Operador de direccion (&)
* Sirve para obtener la direccion de memoria de una variable o objeto
* Operador unario (solo un operante) ejmp &var ---> retorna la direccion de la variable var.
*
*Operador de indireccion (*)
* Sirve para obtener el valor de una direccion de memoria
*Operador unario ejmp *ptr --> retorna el valor de la direccion de memoria que tiene ptr
*
*/
int main()
{
    int* ptr1;// declarando la variable de tipo puntero a entero

    int x; //declarando la variable x

    x = 10; //inicializando la variable x con el valor 10

    ptr1 =&x;

    cout << "direccion de la variable x es: " << &x << endl;
    cout << "direccion de la variable x es: " << ptr1 << endl;
    cout << "el valor de la direccion de la variable ptr es: " << *ptr1 << endl;
    int y =20;
    ptr1 = &y;
    cout << "direccion de la variable y es: " << ptr1 << endl;
    cout << "el valor de la direccion de la variable y es: " << *ptr1 << endl;

     int z = 100;
     ptr1 = &z;
     cout << "direccion de la variable z es: " << ptr1 << endl;
     cout << "el valor de la direccion de la variable z es: " << *ptr1 << endl;

     int* ptr2;
     ptr2 = &z;

     if(ptr1 == ptr2) {
        cout << "ptr 1 y ptr 2 tienen el mismo valor" << endl;
     }
    return 0;
}
