#include <iostream>
using namespace std;

class Complejo{
private:
	double r,i;
public:
	Complejo(double a =0, double b=0){
		r = a; i = b;
	}
	Complejo operator*(Complejo c){
		double real = r*c.r - i*c.i;
		double imag = r*c.i - i*c.r;
		return Complejo(real, imag);
	}
	void mostrar(){
		cout << r << " + " << i << "i" << endl;
	}
};

int main() {
	
	Complejo c1(2,3);
	Complejo c2(4,2);
	
	Complejo c3 = c1*c2;
	
	cout << "Resultado: " << endl;
	c3.mostrar();

	return 0;
}

