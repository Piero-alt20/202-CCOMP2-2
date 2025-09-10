#include <iostream>

using namespace std;

int main()
{
    /** Escribir un programa que pida un numero (3 a 9 digitos)
    * y evalue si dicho numero es un palindromo.
    *ejm
       13331 -> es palindromo
       2133214 -> no es palindromo
       31311313 -> es palindromo
       usando while y for todos y primos y n primos puro for
       */
       int num(0);
       cout << "Escriba un numero de 3 a 9 digitos: " << endl;
       cin>>num;
       int temp=num;
       int invertido= 0;
       while (temp>0){
        invertido=(invertido*10) + (temp % 10);
        temp/=10;
       }
       if (num==invertido){
        cout << "es palindromo" << endl;
       }
       else{
        cout << "no es palindromo" << endl;
       }
        return 0;
}
