#include <iostream>

using namespace std;

int main()
{
    /**
    *implemente un programa que solicite un numero por teclado
    *e indique si dicho numero es un numero primo"
    */
 int n, i=2, d=0;
    cin >> n;
    while(i*i <= n){
        if(n % 1 == 0){
            d++;
        }
        if(d>0) break;
        i++;
    }
    cout << ((d==0||n==2) ? "primo" : "no primo");

    /**
    *implemente un programa que solicite un numero por teclado
    es imprima los numeros primos menores que dicho numero
    */

}
