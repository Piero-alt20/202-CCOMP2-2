#include <iostream>

using namespace std;
/*1-.cree una funcion que se llame duplicar que reciba la direccion de una variable y calcule el doble con punteros
     &=direccion *=valor
  2-.cree una funcion que reciba dos valores que se llame suma y sume los valores y lo muestra
  3-. halla el mayor y contar los pares numero de un arreglo de 5 con punteros*/

/*void duplicar(int* a){
    *a=*a*2;
}*/

/*void sumar(int *a, int *b){
  int suma;
  suma=*a+*b;
  cout << suma<< endl;
}*/
int main()
{
    /*int a=7;
    int b=8;
    int c;

    int *p=&a;
    int *m=&b;

    c=*p;
    *p=*m;
    *m=c;

    cout << a << endl;
    cout << b << endl;*/

    /*int a=5;
    duplicar(&a);
    cout << a;*/

    /*int a=10;
    int b=20;

    sumar(&a,&b);*/

    int numero[5]{2,3,4,5,6};
    int *p=numero;
    int mayor;
    int cont=0;

    for(int i=0; i<5;i++){
        if(*p%2==0){cont++;}

        p++;
    }
    cout<<cont;
    return 0;
}
