#include <iostream>
#include <string>
using namespace std;


class Figura2D{
protected:
	double x;
	double y;
	string color;
public:
	Figura2D(double _x, double _y, string c){
		x= _x; y= _y; color =c;
	}
	void mostrarinfo(){
		cout << "Posicion: (" << x << "," << y << ") ";
		cout << "Color: " << color << endl;
	}
};

class Linea : public Figura2D{
private:
	double x2, y2;
public:
	Linea(double x1, double y1, double x2, double y2,string c) : Figura2D(x1,y1,c){
		this->x2=x2;
		this->y2=y2;
	}
};

class Rectangulo : public Figura2D{
private:
	double base, altura;
public:
	Rectangulo(double x, double y, double b, double h, string c) : Figura2D(x,y,c){
		base =b; altura=h;
	}
	
};

class Circulo : public Figura2D{
private:
	double radio;
public:
	Circulo(double x,double y,double r, string c) : Figura2D(x,y,c){
		radio=r;
	}
};

int main() {
	Linea l(0,0, 3,4, "Rojo");
	Rectangulo r(1,1, 5,2, "azul");
	Circulo c(2,2, 3, "Verde");
	
	l.mostrarinfo();
	r.mostrarinfo();
	c.mostrarinfo();
	
	return 0;
}

