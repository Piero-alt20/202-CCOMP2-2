#include <iostream>
#include <vector>
using namespace std;

class Figura{
public:
	virtual double area()=0;
	virtual ~Figura(){}
};

class Rectangulo : public Figura {
	double b,h;
public:
	Rectangulo(double b, double h) : b(b), h(h){}
	double area()override{
		return b*h;
	}
};

class Circulo : public Figura{
	double r;
public:
	Circulo(double r) : r(r){}
	double area()override{
		return 3.1416*r*r;
	}
};
int main() {
	vector<Figura*> figuras;
	
	figuras.push_back(new Rectangulo(3,4));
	figuras.push_back(new Circulo(2));
	figuras.push_back(new Rectangulo(5,2));
	
	for(auto it = figuras.begin();
	it != figuras.end();++it)
	{
		cout << "Area= " << (*it)->area() << endl;
	}
	for(auto f : figuras)
		delete f;
	
	
	return 0;
}

