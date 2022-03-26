#pragma once
#include <string>
using namespace std;
class Pair
{
private:
	double first;
	double second;

public:
	double GetA() const { return first; }
	double GetB() const { return second; }
	void SetFirst(int X) {};
	void SetSecond(int Y) {};

	void Init(int X, int Y);
	void Display(Pair& k1, Pair& k2);
	void Read(Pair& k1, Pair& k2);

	string ToString(int value) const;


	int Suma1(int a, int b);
	int Suma2(Pair& k2);
	int Multiply1(Pair& k1, Pair& k2);
	int Multiply2(Pair& k1, Pair& k2);

};

