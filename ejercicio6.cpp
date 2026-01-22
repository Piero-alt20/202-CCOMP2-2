#include <iostream>
using namespace std;

class Complejo {
private:
	double r, i;
public:
	Complejo(double a=0, double b=0){
		r=a; i=b;
	}
	Complejo& operator=(const Complejo& c){
		r = c.r;
		i = c.i;
		return *this;
	}
	void mostrar(){
		cout << r << " + " << i << "i" << endl;
	}
};

int main() {
	Complejo c1(3,4);
	Complejo c2;
	
	c2 = c1;
	
	c1.mostrar();
	c2.mostrar();
	
	return 0;
}

