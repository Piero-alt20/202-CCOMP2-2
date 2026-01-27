#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Persona{
public:
	virtual void mostrarinfo()=0;
	virtual ~Persona(){}
};

class Profesor : public Persona {
	string nombre;
public:
	Profesor(string n) : nombre(n){}
	void mostrarinfo()override{
		cout << "Profesor: " << nombre << endl;
	}
};

class Estudiante : public Persona{
	string nombre;
public:
	Estudiante(string n) : nombre(n){}
	void mostrarinfo()override{
		cout << "Estudiante: " << nombre << endl;
	}
};
int main() {
	vector<Persona*> personas;
	
	personas.push_back(new Profesor("Carlos"));
	personas.push_back(new Estudiante("Diego"));

	
	for(auto it = personas.begin(); it != personas.end(); ++it) {
		(*it)->mostrarinfo();
	}
	
	for(auto p : personas)
		delete p;
return 0;	
}
