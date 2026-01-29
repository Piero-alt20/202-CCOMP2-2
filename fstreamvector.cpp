#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	//guardar datos
	std::vector<double> datos = {1.5, 2.3, 4.8, 6.1};
	std::ofstream out("vector.txt");
	
	for(double x : datos)
		out << x << std::endl;
	out.close();
	//leer datos
	std::ifstream in("vector.txt");
	std::vector<double> leidos;
	double valor;
	
	while(in>>valor)
		leidos.push_back(valor);
	in.close();
	//mostrar datos
	for (double x : leidos)
		std::cout << x << std::endl;
	
	return 0;
}

