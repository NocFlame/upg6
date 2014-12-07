// AndreasCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Heltal.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Heltal htal(5);
	Heltal tal(2);
	cout << "talen " << htal.get() << " & " << tal.get() << " nice" << std::endl;
	(htal > tal) ? cout << "true" << endl : cout << "false" << endl;
	cin.get();
	return 0;
}