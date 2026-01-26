#include <iostream>
using namespace std;

class Animal{
public:
	virtual void hablar(){
		cout << "Animal hablando" << endl;
	}
};

class Perro : public Animal{
	void hablar(){
		cout << "perro ladrando" << endl;
	}
};

class Gato : public Animal{
	void hablar(){
		cout << "Gato maullando" << endl;
	}
};

int main() {
	
	Animal* animales[2];
	
	animales[0] = new Perro();
	animales[1]= new Gato();
	
	for(int i=0;i<2;i++)
		animales[i]->hablar();
	
	for(int i=0;i<2;i++)
		delete animales[i];
	
	return 0;
}

