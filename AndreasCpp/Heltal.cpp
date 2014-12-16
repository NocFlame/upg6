#include "stdafx.h"
#include "Heltal.h"
#include <string>

Heltal::Heltal()
{
	tal = 0;
}

Heltal::Heltal(int datatal)
{
	tal = datatal;
}

Heltal::~Heltal()
{
}

void Heltal::set(int datatal)
{
	tal = datatal;
}

int Heltal::get()
{
	return tal;
}

bool Heltal::operator< (const Heltal data) const
{
	return tal < data.tal;
}

bool Heltal::operator>(const Heltal data) const
{
	return tal > data.tal;
}