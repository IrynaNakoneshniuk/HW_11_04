#pragma once
#include "Human.h"
class Apartment
{
private:
	  size_t  length;
	  Human** ptrH;
	  size_t numAprt;
	  static size_t num;

public:
	Apartment() {
		num++;
		length =0 ;
		ptrH = new Human * [length];
		numAprt =num;
	}
	~Apartment();
	Apartment& operator =(const Apartment& ap); 
	void Add(Human* obj);
	int Search(const char* Name,int Age);
	void Remove(const char* Name,int Age);
	void Out(Human*obj);
	size_t QtyH() { return length; };
	size_t NumbAp() { return numAprt; };
	bool Empty() {
		if (length == 0) {
			return true;
		}
		else {
			return false;
		}
	};
	void OutAll();
};

