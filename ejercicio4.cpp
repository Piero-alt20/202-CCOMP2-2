#include <iostream>
using namespace std;

class Complejo{
private:
	double r, i;
public:
  Complejo(double a=0, double b=0){
	  r=a; i=b;
  }
  bool operator==(Complejo c){
	  return(r == c.r && i == c.i); 
  }
  void mostrar(){
	  cout << r << "+" << i << "i" << endl;
  }
};

int main() {
	
	Complejo c1(2,3);
	Complejo c2(2,3);
	Complejo c3(1,4);
	
	if (c1==c2)
		cout << "c1 y c2 son iguales" << endl;
	
	if(!(c1==c3))
		cout << "c1 y c3 son diferentes" << endl;
	
	return 0;
}

