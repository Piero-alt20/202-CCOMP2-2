#include <iostream>
using namespace std;

class Punto{
public:
	int x,y;
	
	Punto(int a=0, int b=0){
		x=a;
		y=b;
	}
	
	Punto operator+(Punto p){
		Punto r;
		r.x=x+p.x;
		r.y=y+p.y;
		return r;
	}
};

int main() {
	
	Punto p1(5,8);
	Punto p2(4,2);
	
	Punto p3 =p1+p2;
	
	cout << "Resultado: (" << p3.x << ", " << p3.y << ")" << endl;
	return 0;
}

