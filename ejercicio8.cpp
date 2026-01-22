#include <iostream>
using namespace std;

class CVector{
private:
	int *v;
	int n;
public:
	CVector(int tam){
		n=tam;
		v=new int[n];
	}
	int& operator[](int i){
		return v[i];
	}
	
	void mostrar(){
		for(int i =0; i<n;i++)
			cout << v[i] << " ";
		cout << endl;
	}
};

int main() {
	CVector a(5);
	
	for(int i=0; i<5;i++)
		a[i] = i*10;
	
	a.mostrar();
	return 0;
}

