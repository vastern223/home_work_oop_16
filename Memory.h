#pragma once
#include<iostream>
#include<string>
using namespace std;

class Memory
{
private:
	string name;
	int memory_capacity;
public:
	Memory() : name("no_name"), memory_capacity(0) {}

	void Set(string name, int memory_capacity)
	{
		this->name = name;
		if (memory_capacity <= 32)
		this->memory_capacity = memory_capacity;
	}
	void Print()const
	{
		cout << " Name memory :" << name << endl;
		cout << " Memory capacity :" << memory_capacity<< " GB" << endl;
		cout << endl;
	}
};

