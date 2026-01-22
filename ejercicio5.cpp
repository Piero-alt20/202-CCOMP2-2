#include <iostream>
using namespace std;

class Complejo{
private:
	double r, i;
public:
	Complejo(double a=0, double b=0){
		r=a; i=b;
	}
	
	friend ostream& operator<<(ostream& os, Complejo c){
		os << c.r << " + " << c.i << "i";
		return os;
	}
};

int main() {
	Complejo c1(3,4);
	Complejo c2(1,2);
	
	cout << "c1= " << c1 << endl;
	cout << "c2= " << c2 << endl;
	return 0;
}

