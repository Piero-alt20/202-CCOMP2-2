#include <iostream>
using namespace std;

class Persona{
protected:
	string nombre;
public:
	Persona(string n){
		nombre=n;
		cout << "Constructor Persona\n";
	}
};
class Profesor : public Persona{
private:
	string curso;
public:
	Profesor(string n, string c):Persona(n){
		curso = c;
		cout << "Constructor Profesor\n";
	}
};
int main() {
	Profesor p("Juan", "Programacion");
	
	return 0;
}

