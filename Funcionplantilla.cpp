#include <iostream>
using namespace std;

template <typename T>
void imprimir(T x){
	cout << "Valor: " << x << endl;
}

template<>
	void imprimir<const char*>(const char* x){
	cout << "Cadena: " << x << endl;
}

	
int main() {
	
	imprimir(10);
	imprimir(3.14);
	imprimir("Hola templates");
	
	return 0;
}

