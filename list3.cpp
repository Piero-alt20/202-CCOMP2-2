#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> l;
	
	l.push_back(10);
	l.push_back(20);
	l.push_front(5);
	l.push_front(1);
	
	cout << "Eliminando el primero y el ultimo..." << endl;
	
	l.pop_front();
	l.pop_back();
	
	for(list<int>::iterator it=l.begin();it != l.end(); it++)
	{
		cout << *it << endl;
	}
	
	return 0;
}

