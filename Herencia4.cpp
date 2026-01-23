#include <iostream>
using namespace std;

class Estructura{
protected:	
	int filas;
	int columnas;
public:
	Estructura(int f, int c){
		filas = f;
		columnas = c;
	}
	void mostrarDim(){
		cout << "Filas: " << filas << ", Columnas: " << columnas << endl;
	}
};

class Vector : public Estructura{
private:
	double*datos;
public:
	Vector (int n) : Estructura(1, n){
		datos = new double[n];
	}
};

class Matriz : public Estructura{
private:
	double** datos;
public:
	Matriz(int f, int c) : Estructura(f, c){
		datos = new double*[f];
		for(int i=0;i<f;i++)
			datos[i] = new double[c];
	}
	
};
int main() {
	Vector v(5);
	Matriz m(3,4);
	
	v.mostrarDim();
	m.mostrarDim();
	return 0;
}

