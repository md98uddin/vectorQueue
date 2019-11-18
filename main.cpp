#include "FastQueue.h"
#include "FastQueue.cpp"

int main() {
	FastQueue<std::string> fq{ 15 };
	fq.enqueue("All");
	fq.enqueue("Dogs");
	fq.enqueue("Are");
	fq.enqueue("Eating");
	std::cout << "After calling two instances of dequeue()" << std::endl;
	fq.dequeue();
	fq.dequeue();
	std::cout << "After calling head() and tail()" << std::endl;
	std::cout << "head => "<<fq.head()<< std::endl;
	std::cout << "tail => " << fq.tail() << std::endl;
	std::cout << "After calling size() and capacity()" << std::endl;
	std::cout << "size => " <<fq.size()<< std::endl;
	std::cout << "capacity => " << fq.capacity() << std::endl;
	std::cout << "calling two instances of at()"<< std::endl;
	std::cout << "index of 0 => " << fq.at(0) << std::endl;
	std::cout << "index of 1 => " << fq.at(1) << std::endl;
	std::cout << "capacity and size check after shrink_to_fit()"<< std::endl;
	fq.shrink_to_fit();
	std::cout << "size => " << fq.size() << std::endl;
	std::cout << "capacity => " << fq.capacity() << std::endl;
	std::cout << "running for loop for at() to print" << std::endl;
	for (int i = 0; i < fq.size(); i++) {
		std::cout << fq.at(i) << std::endl;
	}
}