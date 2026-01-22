#include <iostream>
using namespace std;

class Complejo{
private:
	double r, i;
public:
	Complejo(double re=0, double im=0) : r(re), i(im){}
	
	Complejo& operator++(){
		r++; i++;
		return *this;
	}
	Complejo operator++(int){
		Complejo temp = *this;
		r++; i++;
		return temp;
	}
	void mostrar(){
		cout << r << " + " << i << "i" << endl;
	}
};
int main() {
	
	Complejo c(2,3);
	
	++c;
	c.mostrar();
	return 0;
}

