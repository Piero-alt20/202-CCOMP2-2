#include <iostream>

using namespace std;


   /**
   implemente una funcion que determine si un numero es primo o no
   */
/**bool Esprimo(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
}
}
 return true;
}

void ImpNPrimos(int n) {
int i= 2;
   while (i<n){
    if(esPrimo(i))
        cout << i << " ";
    i++
   }
   cout << endl;
   }
   /**Implemente una funcion que reciba un entero y retorne el numero de digitos que tiene dicho entero
   */
int contarDigitos(long long n) {
    if (n == 0) {
        return true;
    }
    int contador = 0;
    if (n < 0) {
        n = -n;
    }
    while (n > 0) {
        n = n / 10;
        contador++;
    }
    return contador;
}
 int main()
 {
   return 0;
}


