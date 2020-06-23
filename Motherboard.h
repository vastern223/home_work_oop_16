#pragma once
#include<iostream>
#include<string>
using namespace std;

class Motherboard
{
private:
    string  name;
	int number_of_memory_slots;
public:
	Motherboard() : name("no_name"), number_of_memory_slots(0) {}
	;
	void Set(string name, int number_of_memory_slots)
	{
		this->name = name;
		if (number_of_memory_slots > 0 && number_of_memory_slots <= 4)
			this->number_of_memory_slots = number_of_memory_slots;
	}
	void Print()const
	{
		cout << " Name  motherboard :" << name << endl;
		cout << " Number of memory slots :" << number_of_memory_slots << endl;
		cout << endl;
	}
};

