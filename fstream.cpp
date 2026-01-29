#include <fstream>
#include <iostream>
using namespace std;

int main() {
	std::ofstream archivo("dato.txt");
	
	if(!archivo){
		std::cout << "Error al abrir archivo\n";
		return 1;
	}
	
	archivo << "10 20 30\n";
	archivo << "Hola mundo\n";
	return 0;
}

