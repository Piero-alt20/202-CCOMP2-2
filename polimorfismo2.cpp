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
	
	Punto* v[3];
	
	v[0] = new Punto(1,2);
	v[1] = new Punto(3,4);
	v[2] = new Punto(5,6);
	
	for(int i=0;i<3;i++)
		v[i]->mostrar();
	
	for(int i=0;i<3;i++)
		delete v[i];
	
	return 0;
}

