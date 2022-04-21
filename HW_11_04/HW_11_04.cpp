#include "House.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	Human* h1 =new Human("Olga", 20, "women");
	Human* h2=new Human("Volodymyr", 40,"man");
	Human* h3 = new Human("Maria", 30, "women");
	Human* h4 = new Human();
	h4 = h1;
	Apartment* a1= new Apartment();
	Apartment* a2 = new Apartment();
	Apartment* a3 = new Apartment();
	Apartment* a4 = new Apartment();
	Apartment* a5 = new Apartment();
	a1->Add(h1);
	a1->Add(h2);
	a1->Add(h3);
	a2->Add(h4);
	a3 = a1;
	House *house=new House();
	house->IniHouse(a1, a2, a3, a4, a5);
	house->OutAp();
	cout << "\n\tSearch result in apartmen 1: " << endl;
	a1->Search("Ma", 30);
	cout << "\n\tRemoving  result in the apartmen 1: " << endl;
	a1->Remove("Maria", 30);
	cout << "\n\tSearch result an apartmen 4: " << endl;
	house->SearchApart(4);
	_getch();
	return 0;
}

