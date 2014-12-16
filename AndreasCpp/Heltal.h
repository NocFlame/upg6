#pragma once
class Heltal
{
public:
	Heltal();
	Heltal(int);
	~Heltal();
	void set(int);
	int get();
	bool operator< (const Heltal) const;
	bool operator> (const Heltal) const;

private:
	int tal;
};