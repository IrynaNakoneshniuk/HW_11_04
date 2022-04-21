#include "Human.h"
#include <iostream>
using namespace std;
Human::Human(const Human& object)
{
	strcpy(this->Name, object.Name);
	this->age = object.age;
	strcpy(this->s, object.s);
}
Human::Human()
{
	Name = nullptr;
	age = 0;
	s = nullptr;
}
Human::Human(const char* NameT, int ageT, const char* sT) {
	this->Name = new char[strlen(NameT)+1];
	strcpy(Name, NameT);
	this->s = new char [strlen(sT)+1];
	strcpy(s, sT);
	this->age = ageT;
}