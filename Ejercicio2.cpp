#include <iostream>
using namespace std;

class Complejo{
private:
	double r,i;

public:
	Complejo(double a=0, double b=0){
		r=a; i =b;
	}
	Complejo operator-(Complejo c){
		return Complejo(r - c.r, i - c.i);
	}
	void mostrar(){
		cout << r << " + " << i << "i" << endl;
	}
	
};

int main() {
	Complejo c1(5,7);
	Complejo c2(2,3);
	
	Complejo c3 = c1 - c2;
	
	cout << "Resultado: ";
	c3.mostrar();
	
	return 0;
}

