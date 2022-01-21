#include "Chips.h"

Chips::Chips() :
	GoodBasic{ 0, 1, "noname", "nonedescription" }
{
	_weight = 42;
	_typeOfTaste = "Vanilla";
}

Chips::Chips(int id, int price, string name, string description, int weight, string typeOfTaste) :
	GoodBasic{ id, price, name, description }
{
	_weight = weight;
	_typeOfTaste = typeOfTaste;
}

int Chips::getWeight()
{
	return _weight;
}

void Chips::setWeight(int newWeight)
{
	if (newWeight <= 0 || newWeight > 10000)
	{
		_weight = 42;
	}
	else
	{
		_weight = newWeight;
	}
}

string Chips::getType()
{
	return _typeOfTaste;
}

void Chips::setType(string newType)
{
	_typeOfTaste = newType;
}

void Chips::toString()
{
	cout << "toString From Chips:" << getItemId() << ' ' << getPrice() << ' ' << getName() << ' ' << getDescription() << " Вес: " << _weight << " Вкус: " << _typeOfTaste << '\n';
}