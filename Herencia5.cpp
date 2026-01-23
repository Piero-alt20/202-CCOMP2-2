#include <iostream>
using namespace std;

class Persona{
public:
	int edad;
protected:
	string nombre;
};

class Alumno : public Persona{
public:
	void mostrar(){
		cout << edad << endl;
		cout << nombre << endl;
	}
};

class Alumno2 : protected Persona{
public:
	void mostrar(){
		cout << edad << endl;
		cout << nombre << endl;
	}
};
class Alumno3 : private Persona{
public:
	void mostrar(){
		cout << edad << endl;
		cout << nombre << endl;
	}
};
int main() {
	
	Alumno a;
	
	Alumno2 b;
	
	Alumno3 c;
	
	return 0;
}

