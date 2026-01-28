#include <iostream>
using namespace std;

template <typename T>
class Contenedor{
private:
	T* datos;
	int capacidad;
	int n;
public:
	Contenedor(int cap=10){
		capacidad=cap;
		n=0;
		datos = new T[capacidad];
	}
	void agregar(T x){
		if(n<capacidad)
			datos[n++] = x;
	}
	T obtener(int i){
		return datos[i];
	}
	int tamano(){
		return n;
	}
	void mostrar(){
		for(int i=0;i<n;i++)
			cout << datos[i] << " ";
		cout << endl;
	}
};

int main() {
	
	Contenedor<int> ci;
	ci.agregar(10);
	ci.agregar(20);
	ci.mostrar();
	
	Contenedor<double> cd;
	cd.agregar(3.14);
	cd.agregar(2.71);
	cd.mostrar();
	return 0;
}

