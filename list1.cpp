#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> l;
	
	l.push_back(10);
	l.push_back(20);
	l.push_front(5);
	l.push_front(1);
	
	cout << "Elementos de la lista:" << endl;
	
	for(list<int>::iterator it=l.begin();it != l.end(); ++it)
	{
		cout << *it << endl;
	}
	
	
	return 0;
}

