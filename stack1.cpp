#include <iostream>
#include <stack>
using namespace std;

class Figura{
public:
	virtual double area()=0;
	virtual ~Figura(){}
};
class Rectangulo : public Figura{
	double b, h;
public:
	Rectangulo(double b, double h):b(b), h(h){}
	double area() override {return b*h;}
};
class Circulo : public Figura{
	double r;
public:
	Circulo(double r):r(r){}
	double area()override {return 3.1416*r*r;}
};

int main() {
	stack<Figura*> pila;
	
	pila.push(new Rectangulo(3,4));
	pila.push(new Circulo(2));
	pila.push(new Rectangulo(5,2));
	
	while(!pila.empty()){
		Figura* f = pila.top();
		cout << "Area = " << f->area() << endl;
		delete f;
		pila.pop();
	}
	
	
	
	return 0;
}

