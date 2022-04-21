#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
class Human
{
	char* Name;
	int age;
	char* s;
    public:
		Human();
		~Human() { delete[] this->Name, delete[] this->s; }
		Human(const char* NameT, int ageT, const char* sT); 
		Human(const Human& object);
		char* getName()const { return this->Name; };
		char* getS()const { return this->s; };
		int getAge()const { return this->age; };
};

