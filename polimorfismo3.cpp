#include <iostream>
using namespace std;

class Figura2D{
protected:
	double x,y;
public:
	Figura2D(double _x, double _y){
		x = _x; y = _y;
	}
	virtual double area(){
		return 0;
	}
};

class Rectangulo : public Figura2D{
	double base, altura;
public:
	Rectangulo(double x, double y,double b,double h) : Figura2D(x,y){
		base = b; altura = h;
	}
	double area(){
		return base * altura;
	}
};
class Circulo : public Figura2D{
	double radio;
public:
	Circulo(double x, double y, double r) : Figura2D(x,y){
		radio =r;
	}
	double area(){
		return 3.1416 * radio * radio;
	}
};
int main() {
	Figura2D* figuras[2];
	figuras[0] = new Rectangulo(0,0,4,5);
	figuras[1] = new Circulo(0,0,3);
	
    for(int i=0;i<2;i++)
		cout << figuras[i]->area() << endl;
	
	return 0;
}

