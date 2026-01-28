#include <iostream>
using namespace std;

template <typename T>
T maximo(T a, T b){
	if(a>b)
		return a;
	else
		return b;
}

int main() {
	int x = 10, y=20;
	double a=3.5, b=2.1;
	
	cout << "Maximo entero: " << maximo(x,y) << endl;
	cout << "Maximo real: " << maximo(a, b) << endl;
	
	
	return 0;
}

