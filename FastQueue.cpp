//Md Uddin
#include "FastQueue.h"

//constructor to pass reserve size of vector
template<typename T>
inline FastQueue<T>::FastQueue(int capacity)
{
	std::cout << "***Queue Created***" << std::endl;
	elements = 0;
	vec.reserve(capacity);
}

//destructor
template<typename T>
FastQueue<T>::~FastQueue()
{
	std::cout << "***End of Program" << std::endl;
}

//allows us to insert element to the back if head exists 
template<typename T>
void FastQueue<T>::enqueue(const T&& elem)
{
	data = elem;
	if (vec.empty()) {
		vec.insert(vec.begin(), data);
	}
	else {
		vec.insert(vec.end(), data);
	}

	elements++;
}

//removes the head (FIFO)
template<typename T>
void FastQueue<T>::dequeue()
{
	assert(!vec.empty());
	vec.erase(vec.begin());
	elements--;
}

//returns head of the queue
template<typename T>
T FastQueue<T>::head()
{
	try
	{
		return vec.at(0);
	}
	catch (const std::out_of_range & error)
	{
		std::cout << "no head found--queue is empty" << std::endl;
	}
}

//returns tail of the queue
template<typename T>
T FastQueue<T>::tail()
{
	try
	{
		return vec.at(vec.size() - 1);
	}
	catch (const std::out_of_range & error)
	{
		std::cout << "no tail found--queue is empty" << std::endl;
	}
}

//returns reference at index-th element
template<typename T>
T FastQueue<T>::at(int index)
{
	try
	{
		return vec.at(index);
	}
	catch (const std::out_of_range& error)
	{
		std::cout << "index out of bounds at ["<<index<<"]"<< std::endl;
	}	
}

//returns number of element in queue
template<typename T>
int FastQueue<T>::size()
{
	return elements;
}

//returns the capacity of the vector
template<typename T>
int FastQueue<T>::capacity()
{
	return vec.capacity();
}

//reduces capacity to fit number of element(size)
template<typename T>
void FastQueue<T>::shrink_to_fit()
{
	std::vector<T> temp = vec;
	vec.swap(temp);
}
