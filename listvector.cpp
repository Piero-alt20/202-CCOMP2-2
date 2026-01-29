#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Iterator{
public:
	virtual void first()=0;
	virtual void next()=0;
	virtual bool isDone() const=0;
	virtual int currentItem() const=0;
	virtual ~Iterator(){}
};

class Aggregate{
public:
	virtual Iterator* createIterator()=0;
	virtual ~Aggregate(){}
};

class VectorAggregate : public Aggregate{
	std::vector<int> data;
public:
	void add(int v){data.push_back(v);}
	Iterator* createIterator();
	int get(int i) const {return data[i];}
	int size() const {return data.size();}
};
class VectorIterator : public Iterator{
	const VectorAggregate& agg;
	int index;
public:
	VectorIterator(const VectorAggregate& a) : agg(a), index(0){}
	void first(){index=0;}
	void next(){index++;}
	bool isDone() const{return index >= agg.size();}
	int currentItem() const { return agg.get(index);}
};
Iterator* VectorAggregate::createIterator(){
	return new VectorIterator(*this);
}
class ListAggregate : public Aggregate{
	std::list<int> data;

public:
	void add(int v) {data.push_back(v);}
	Iterator* createIterator();
	const std::list<int>& getList() const {return data;}
};
class ListIterator : public Iterator{
	const ListAggregate& agg;
	std::list<int>::const_iterator it;
public:
	ListIterator(const ListAggregate& a) : agg(a)
	{ it = agg.getList().begin();}
	void first() {it=agg.getList().begin();}
	void next() {++it;}
	bool isDone() const{
	return it == agg.getList().end();}
	int currentItem() const {return *it;}
};
Iterator* ListAggregate::createIterator(){
	return new ListIterator(*this);
}

int main() {
	Aggregate* a1 = new VectorAggregate();
	Aggregate* a2= new ListAggregate();
	
	static_cast<VectorAggregate*>(a1)->add(1);
	static_cast<VectorAggregate*>(a1)->add(2);
	
	static_cast<ListAggregate*>(a2)->add(10);
	static_cast<ListAggregate*>(a2)->add(20);
	
	Iterator* it1=a1->createIterator();
	for(it1->first(); !it1->isDone(); it1->next())
		std::cout << it1->currentItem() << std::endl;
	
	Iterator* it2=a2->createIterator();
	for(it2->first(); !it2->isDone(); it2->next())
		std::cout << it2->currentItem() << std::endl;
	
	return 0;
}

