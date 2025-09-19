#include <iostream>

using namespace std;
/**
*Recursividad: cuando una funcion se llama a si misma
*
*        n!= n * (n-1)!
*        5!= 5 * (4)!
*                 4 * (3)!
*/
long long factorial(long n) {
  /**
  *Primero se define el caso base
  *posteriormente se define el paso recursivo
  */
  if(n==1)
    return 1;
  else
    return n* factorial(n-1);
}
/**
*Fibonacci
*fib(n) = fib(n-1) + fib (n-2)
*    fib(0)=1
*    fib(1)=1
*
*  1 1 2 3 5 8 13...
*/
long long fibonacci(long n) {
if (n==1 || n==0)
    return 1;
else
    return fibonacci(n-1) + fibonacci (n-2);
}
/**Implemente un codigo que desconponga un entero
*/
long long contardg(long n){
if (n<10)
    return 1;
else
    return 1+ contardg(n/10);
}
/**Dado un numero verificar si es capicua
*/
long long capicua(long n){
if (n<10)
    return true;
else
    return
}
int main()
{
    cout << contardg(8234) << endl;
    return 0;
}
