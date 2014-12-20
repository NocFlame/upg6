#pragma once
#include "Heltal.h"
class Array
{
public:
	Array();
	Array(int);
	~Array();
	void destroy();
	void fillArray(int, int);
	void quickSort(Array, int, int);
	//int get(int);
	//void set(int);
	void print();

private:
	Heltal* tal_ptr;
	int size = 10;
};
