#include "stdafx.h"
#include "Array.h"
#include "Heltal.h"
#include <cstdlib>
#include <iostream>
#include <random>

Array::Array()
{
	tal_ptr = new Heltal[size];
}

Array::Array(int storlek)
{
	size = storlek;
	tal_ptr = new Heltal[size];
}

Array::~Array()
{
	//delete [] tal_ptr;
}

//Always becomes the same random numbers! Need a reseed with seed to work better...
void Array::fillArray(int min, int max)
{
	std::random_device rd; // obtain a random number from hardware
	std::mt19937 eng(rd()); // seed the generator
	std::uniform_int_distribution<> distr(min, max); // define the range

	for (int n = 0; n < size; n++)
	{
		//std::cout << distr(eng) << ' '; // generate numbers
		tal_ptr[n] = distr(eng);
	}
}

void Array::quickSort(Array arr, int first, int last) {
	int low = first, high = last;
	Heltal tmp;
	Heltal pivot = tal_ptr[(first + last) / 2].get();

	/* partition */
	while (low <= high) {
		while (tal_ptr[low] < pivot)
			low++;
		while (tal_ptr[high] > pivot)
			high--;
		if (low <= high) {
			tmp = tal_ptr[low];
			tal_ptr[low] = tal_ptr[high];
			tal_ptr[high] = tmp;
			low++;
			high--;
		}
	};

	/* recursion */
	if (first < high)
		quickSort(arr, first, high);
	if (low < last)
		quickSort(arr, low, last);
}

/*
int Array::get(int nbr)
{
return tal_ptr[nbr].get;
}

void Array::set(int nbr)
{
tal_ptr[nbr].set(nbr);
}
*/

void Array::print()
{
	for (int i = 0; i < size; i = i + 2)
	{
		std::cout << tal_ptr[i].get() << "	" << tal_ptr[i + 1].get() << std::endl;
	}
}