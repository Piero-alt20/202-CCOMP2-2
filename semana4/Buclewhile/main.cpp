#include <iostream>

using namespace std;

int main()
{
    /**
    *Bucle while
    * while (condicion) {
    instrucciones1
    instrucciones2
    ...
    instruccionesN
    }
    */
    int i=0;
    while(i <= 10) {
        cout << i << endl;
    i=i+1;
    }
    i = 9;
    while(i >= 1){
            cout << i << endl;
     i=i-1;
    }
    // imprimir multiplos de 3 menores que 100
    cout << "----------------" << endl;
    i=0;
    while(i<100){
        if (i%3==0){
                cout << i << endl;
                i=i+1;}
        else {
            i=i+1;}
    }
    return 0;
}
