
#include "Apartment.h"
#include "Human.h"
#include <iostream>
#include <iomanip>

using namespace std;
size_t  Apartment::  num = 0;

Apartment::~Apartment()
{
	for (size_t i = 0; i < length; i++) {
		delete ptrH[i];
	}
	delete[]ptrH;
}
Apartment& Apartment::operator=(const Apartment& ap)
{
	if (this == &ap) {
		return *this;
	}
	if (this->length != ap.length) {
		delete[] ptrH;
		this->length = ap.length;
		ptrH = new Human *[length];
	}
	for (size_t i = 0; i < length; i++) {
		ptrH[i] = ap.ptrH[i];
	}
	return *this;
}

void Apartment::Add( Human *obj)
{ 
	Human** newArr = new  Human*[length + 1];
	for (size_t i = 0; i < length; i++) {
		newArr[i] = ptrH[i];
	}
	newArr[length] = obj;
	delete ptrH;
	ptrH = newArr;
	length++;
}

int Apartment::Search(const char* Name,int Age)
{
	for ( size_t i = 0;  i < length;  i++)
	{
		if ((!strncmp(ptrH[i]->getName(),Name, 2))&&
			(ptrH[i]->getAge()==Age)) {
			Out(ptrH[i]);
			return i;
		}
	}
}

void Apartment::Remove(const char* Name,int Age)
{
	size_t i = Search(Name,Age);
	delete ptrH[i];
	for (; i < length-1; i++) {
		ptrH[i] = ptrH[i + 1];
	}
	length--;
}

void Apartment::Out(Human*obj)
{
 cout << "\n\tName: " << setw(4) << obj->getName() << endl;
 cout << "\tAge: " << setw(6) << obj->getAge() << endl;
 cout << "\tSex: " << setw(6) << obj->getS() << endl;
  cout << endl;
}

void Apartment::OutAll()
{
	cout << "\n\tApartment num -" << numAprt <<endl;
	if (Empty()) {
		cout << "\n\tApartment is empty!" <<endl;
	}
	else {
		for (size_t i = 0; i < length; i++) {
			Out(ptrH[i]);
		}
	}
}
