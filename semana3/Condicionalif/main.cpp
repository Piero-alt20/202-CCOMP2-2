#include <iostream>

using namespace std;

int main()
{
    /**
    *condional if
    *
      if (condicion)
        //Sentencia A. se ejecuta si la condicion es verdadera.
     else
        // Sentecia B. se ejecuta si la condicion es falsa.

    *Operadores logicos
    && - and
    || - or
    ! - negacion
    Ejm
     a=10, b=5
      (a>5) -> true
      (a<3) -> false
      (a==8) -> false
      (a !=) -> true
      (a>=10 && b<10) -> true
      (a<6 || b==5) -> true

    */

    int a=10;
    int b=5;

    if (a>5)
        cout << "el numero" << a << "es mayor que 5" << endl;

    if (a>5 && b<=5)
        cout << "Hai my name is Johan y tengo " << b << "carros" << endl;
    return 0;
}
