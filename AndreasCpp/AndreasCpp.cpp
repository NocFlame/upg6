// AndreasCpp.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Heltal.h"
#include "Array.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Heltal htal(5);
	Heltal tal(2);
	cout << "talen " << htal.get() << " & " << tal.get() << " nice" << std::endl;
	(htal > tal) ? cout << "true" << endl : cout << "false" << endl;
	Array a(20);
	a.fillArray(0, 10);
	a.print();
	a.quickSort(a, 0, 10);
	cout << endl;
	a.print();
	cin.get();
	return 0;
}