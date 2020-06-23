#include<iostream>
#include "Personal_computer.h"
using namespace std;



int main()
{
	Personal_computer lol("vov", 2,"main", 2, 2.4, 8) ;
	Admin mb;
	mb.Set("dima", 10);

	lol.AggregateAdmin(&mb);
	cout << endl;
	lol.Print_Personal_computer();


	Personal_computer lol1("mom", 1, "lol", 1, 2.9, 7);
	lol1.AggregateAdmin(&mb);
	lol1.Print_Personal_computer();
	system("pause");
	return 0;
}
