#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	
	v.push_back(100);
	v.push_back(200);
	v.push_back(300);
	
	cout << "Recorrido usando auto e iteradores:" << endl;
	
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it){
		cout << *it << endl;
	}
	
	return 0;
}

