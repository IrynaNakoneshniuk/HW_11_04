#pragma once
#include "Apartment.h"
#include <cassert>
class House
{
private:
	Apartment** ptrAp;
	const int lengthAp=5;
    public:
		House() {
			ptrAp = new Apartment * [lengthAp];
			for (size_t i = 0; i < lengthAp; i++) {
				ptrAp[i] = new Apartment();
			}
		}
		~House() {
			for (size_t i = 0; i < lengthAp; i++) {
				delete[]ptrAp[i];
			}
			delete[]ptrAp;
		}
		Apartment& operator[](int num);
		Apartment operator[](int num) const;
		void IniHouse(Apartment* ap1, Apartment* ap2,
			Apartment* ap3, Apartment* ap4, Apartment* ap5);
		void SearchApart(int numA);
		void OutAp();
		void DelAll();
};

