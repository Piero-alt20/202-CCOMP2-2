#include <iostream>
using namespace std;

class Figura{
public:
	Figura(){
		cout << "Constructor Figura" << endl;
	}
	
	virtual ~Figura(){
		cout << "Destructor Figura" << endl;
	}
};
class Circulo : public Figura{
	double* radio;
public:
	Circulo(double r){
		radio = new double(r);
		cout << "Constructor Circulo" << endl;
	}
	
	~Circulo(){
		delete radio;
		cout << "Destructor Circuito" << endl;
	}
};

int main() {
	Figura* f = new Circulo(5.0);
	
	cout << "Eliminando objeto..." << endl;
	delete f;
	return 0;
}

