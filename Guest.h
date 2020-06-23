#pragma once
#include<iostream>
#include<string>
using namespace std;

class Guest
{
private:
	string name;
	int age;
public:
	Guest() : name("no_name"), age(0) {}

	void Set(string name, int age)
	{
		this->name = name;
		if (age > 0 && age <= 100)
			this->age = age;
	}
	void Print()const
	{
		cout << " Guest" << endl;
		cout << " Name :" << name << endl;
		cout << " Age :" << age << endl;
		cout << endl;
	}
};

