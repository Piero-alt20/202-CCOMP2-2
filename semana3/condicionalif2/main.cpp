#include <iostream>

using namespace std;

int main()
{
   char val;
   cout << "ingrese un caracter por favor: ";
   cin >> val;

   cout << "el caracter ingresado es: " << val << endl;
   int num= static_cast<int>(val);
   cout << "el valor numerico es: " << num << endl;
   /**
   - Ecribir un programa que indique si el valor ingresado es una letra mayuscula
   */

if (num >= 65 && num <= 90) {
    cout << "es un letra mayuscula" << endl;
} else {
    cout << "no es una letra mayuscula" << endl;
}

/** EScribir un programa que indique si el valor ingresado es una Letra mayuscula o una letra minuscula
*/

if((num >=65 && num <=90) || (num >= 97 && num <=122)){
 cout << "es una letra mayuscula" << endl;
}else{
    cout << "es una letra minuscula" << endl;
}
/** Escribir un programa que indique si el valor ingresado es un numero
*/
if (num >=48 && num<= 57) {
 cout << "es un numero" << endl;
}else{
    cout << "no es un numero" << endl;
}
   return 0;
}
