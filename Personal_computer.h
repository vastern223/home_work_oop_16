#pragma once
#include<iostream>
#include<string>
#include"Admin.h"
#include"Guest.h"
#include"Memory.h"
#include"Motherboard.h"
#include"Processor.h"

using namespace std;
class Personal_computer
{
private:
	Admin* admin;
	Guest* guest;
	Memory memory[2];
	Motherboard motherboard;
	Processor  processor;
	
public:
	Personal_computer() : admin(nullptr), guest(nullptr) {}

	Personal_computer(string name, int memory_capacity, string name_mb, int number_of_memory_slots, float frequency, int number_of_cores)
	{
		for (int i = 0; i < 2; i++)
		{
			memory[i].Set(name, memory_capacity);
		}
		motherboard.Set(name_mb, number_of_memory_slots);
		processor.Set(frequency, number_of_cores);
	}

	void AggregateAdmin(Admin* other)
	{
		this->admin = other;
	}
	void AggregateGuest(Guest* other)
	{
		this->guest = other;
	}
	bool DeleteAdmin()
	{
		if (admin != nullptr)
		{
			admin = nullptr;
			return true;
		}
		else
		{
			return false;
		}

	}
	bool DeleteGuest()
	{
		if (guest != nullptr)
		{
			guest = nullptr;
			return true;
		}
		else
		{
			return false;
		}

	}
	void Print_Personal_computer()
	{
		cout << "---Personal_computer---\n\n";
		if (admin != nullptr)
		{
			admin->Print();
		}

		if (guest != nullptr)
		{
			guest->Print();

		}
		for (int i = 0; i < 2; i++)
		{
			memory[i].Print();

		}

		motherboard.Print();


		processor.Print();


	}
};

