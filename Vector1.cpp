#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	//insertar elementos
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	
	cout << "Vector inicial: ";
	for(int i=0; i<v.size();i++)
		cout << v[i] << " ";
	cout << endl;
	
	v.pop_back();//elimina ultimo elemento
	
	cout << "Luego de pop_back(): ";
	for(int i=0;i<v.size();i++)
		cout << v[i]<<" ";
	cout << endl;
	//verifica si esta vacio
	if(v.empty())
		cout << "El vector esta vacio" << endl;
	else
		cout << "El vector no esta vacio" << endl;
	//limpiar todo
	v.clear();
	cout << "luego de clear(), tamaño= " << v.size() << endl;
	
	
	return 0;
}

