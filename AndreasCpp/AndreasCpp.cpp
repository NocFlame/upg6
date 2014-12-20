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
	int storlek = 10000;
	cin.get();
	Array a(storlek);
	cin.get();
	a.fillArray(0, 1000);
	cin.get();
	a.print();
	cin.get();
	a.quickSort(a, 0, --storlek);
	cout << endl;
	cin.get();
	a.print();
	a.destroy();
	cin.get();
	return 0;
}