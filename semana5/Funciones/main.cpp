#include <iostream>

using namespace std;

int potencia(int base, int exp){
    int result=1;
    //for (inicializacion;condicion;incremento)
    for(int i=0; i<n; i++) {
        result*=base;
 }
 return result;
}
int main()
{
    cout << potencia(3,4) << endl;
 return 0;
  int num;
    std::cout << "Ingresa un numero ";
    std::cin >> num;

    if (Esprimo(num)) {
        std::cout << num << " es un numero primo" << std::endl;
    } else {
        std::cout << num << "no es un numero primo" << std::endl;
    }
    return 0;
}
