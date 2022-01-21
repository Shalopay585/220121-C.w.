#pragma once
#include "GoodBasic.h"
class Chips : public GoodBasic
{
private:
	string _typeOfTaste;
	int _weight;
public:
	Chips();
	Chips(int id, int price, string name, string description, int _weight, string _typeOfTaste);

	int getWeight();

	void setWeight(int newWeight);

	string getType();

	void setType(string newType);

	void toString();
};

