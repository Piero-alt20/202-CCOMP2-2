#include <iostream>
#include <vector>
#include <string>
using namespace std;

class EstacionMeteorologica{
private:
	string nombre;
	vector<double> temperaturas;
public:
	EstacionMeteorologica(const string& n) : nombre(n){}
	void agregarTemperatura(double t){
		temperaturas.push_back(t);
	}
	void mostrarTemperaturas() const {
		for (auto it = temperaturas.begin();
		it != temperaturas.end(); ++it){
			cout << *it<<" ";
		} cout << endl;
	}
	double calcularPromedio() const {
		double suma = 0.0;
		for (auto it = temperaturas.begin();
		it != temperaturas.end(); ++it){
			suma += *it;
		}
		return temperaturas.empty()
			? 0.0
			: suma / temperaturas.size();
	}
};

int main() {
	EstacionMeteorologica estacion("Central");
	
	estacion.agregarTemperatura(22.5);
	estacion.agregarTemperatura(23.1);
	estacion.agregarTemperatura(21.8);
	estacion.agregarTemperatura(24.0);
	estacion.agregarTemperatura(22.9);
	
	estacion.mostrarTemperaturas();
	
	cout << "Promedio: "
		<< estacion.calcularPromedio()
		<< endl;
	
	
	return 0;
}

