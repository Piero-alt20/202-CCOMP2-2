#include <iostream>
#include <list>
using namespace std;

template <typename T>
class VectorIterator{
	T* data;
	int size;
	int index;
public:
	VectorIterator(T* d, int s):data(d), size(s), index(0){}
	void first(){index=0;}
	void next(){index++;}
	bool isDone() const {return index >= size;}
	T& operator*() {return data[index];}
};
template <typename T>
class MyVector {
	T* data;
	int sz;
public:
	MyVector(int s): sz(s){data = new T[s];}
	~MyVector(){delete[] data;}
	T& operator[](int i){return data[i];}
	int size() const { return sz;}
	VectorIterator<T> begin()
	{return VectorIterator<T>(data, sz);}
};

template <typename T>
class ListIterator{
	typename std::list<T>::iterator it;
	std::list<T>& data;
public:
	ListIterator(std::list<T>& d) : data(d) {it = data.begin();}
	void first() { it = data.begin();}
	void next() { ++it;}
	bool isDone() const {return it == data.end();}
	T& operator*() { return *it;}
};

template <typename T>
class MyList{
	std::list<T> data;
public:
	void add(T val) { data.push_back(val);}
	ListIterator<T> begin()
	{return ListIterator<T>(data);}
	std::list<T>& getList() { return data;}
};
int main() {
	MyVector<int> v(3);
	v[0] = 10; v[1] = 20; v[2] = 30;
	
	auto it=v.begin();
	std::cout << "Vector contents:" << std::endl;
	for(it.first(); !it.isDone(); it.next())
		std::cout << *it << std::endl;
	
	return 0;
}

