#include <iostream>
using namespace std;

class Archivo{
protected:
	string nombre, ruta;
	double tamaño;
public:
	Archivo(string n, string r, double t){
		nombre=n; ruta=r; tamaño=t;
	}
};

class ArchivoTexto : Archivo{
};

int main() {
	
	return 0;
}

