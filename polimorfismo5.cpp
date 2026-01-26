#include <iostream>
using namespace std;

class Persona {
protected:
	string name;
public:
	Persona(string n) : name(n) {}
	virtual void mostrarRol() = 0;
};

class Profesor : public Persona {
public:
	Profesor(string n) : Persona(n) {}
	void mostrarRol() override {
		cout << "Soy Profesor" << endl;
	}
};

class Alumno : public Persona {
public:
	Alumno(string n) : Persona(n) {}
	void mostrarRol() override {
		cout << "Soy Alumno" << endl;
	}
};

int main() {
	Persona* nombre[2];
	
	nombre[0] = new Profesor("Carlos");
	nombre[1] = new Alumno("Juan");
	
	for(int i = 0; i < 2; i++)
		nombre[i]->mostrarRol();
	
	for(int i = 0; i < 2; i++)
		delete nombre[i];
	
	return 0;
}


