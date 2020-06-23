#pragma once
#include<iostream>
#include<string>
using namespace std;

class Admin
{
private:
	string name;
	int age;
public:
	Admin() : name("no_name"), age(0) {}
	
	void Set(string name, int age)
	{
		this->name = name;
		if (age > 0 && age <= 100)
			this->age = age;
	}
	void Print()const
	{
		cout << " Admin" << endl;
		cout << " Name :" << name << endl;
		cout << " Age :" << age << endl;
		cout << endl;
	}

};

