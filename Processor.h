#pragma once
#include<iostream>
using namespace std;
class Processor
{
private:
	float frequency;
	int number_of_cores;
public:
	Processor() :frequency(0), number_of_cores(0) {}
	
	void Set(float frequency, int number_of_cores)
	{
		this->frequency = frequency;
		this->number_of_cores = number_of_cores;
	}
	void Print()const
	{
		cout << " Frequency processor :" << frequency << endl;
		cout << " Number of cores :" << number_of_cores << endl;
		cout << endl;
	}
};

