//Md Uddin
#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <assert.h>

template <typename T>
class FastQueue {
private:
	T data;
	std::vector<T> vec;
	int elements;
public:
	FastQueue(int capacity);
	~FastQueue();
	void enqueue(const T &&elem);
	void dequeue();
	T head();
	T tail();
	T at(int index);
	int size();
	int capacity();
	void shrink_to_fit();
};