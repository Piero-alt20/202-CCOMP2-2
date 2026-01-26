#include <iostream>
using namespace std;

class Punto{
	double x,y;
public:
	Punto(double _x, double _y){
		x = _x; y = _y;
	}
	void mostrar(){
		cout << "(" << x << "," << y << ")" << endl;
	}
};

int main() {
	
	Punto p1(2,3);
	p1.mostrar();
	
	Punto* p2 = new Punto(5,6);
	p2->mostrar();
	
	delete p2;	
	return 0;
}


