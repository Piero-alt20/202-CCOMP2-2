#include<iostream>
using namespace std;

class Empleado{
public:
	virtual ~Empleado(){
		cout << "Destructor Empleado" << endl;
	}
};
class Profesor : public Empleado{
	int* horas;
public:
	Profesor(){
		horas = new int(10);
		cout << "Constructor Profesor" << endl;
	}
	
	~Profesor(){
		delete[] horas;
		cout << "Destructor Profesor(memoria liberada)" << endl;
	}
};
class Administrador : public Empleado{
	int* horas;
public:
	Administrador(){
		horas = new int(14);
		cout << "Constructor Administrador" << endl;
	}
	
	~Administrador(){
		delete[] horas;
		cout << "Destructor Administrador(memoria liberada)" << endl;
	}
};

int main() {
	Empleado* h = new Profesor(10);
	Empleado* h = new Administrador(14);
	cout << "Eliminando objeto..." << endl;
	delete h;
	return 0;
}

