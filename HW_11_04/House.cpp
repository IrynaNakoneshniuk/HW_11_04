#include "House.h"

Apartment& House::operator[](int idx)
{
    assert(idx < 0 and idx > lengthAp and "Index is out "
        "of range!");
    return *ptrAp[idx];
}

Apartment House::operator[](int idx) const
{
    assert(idx < 0 and idx > lengthAp and "Index is out "
        "of range!");
    return *ptrAp[idx];
}

void House::IniHouse(Apartment* ap1, Apartment* ap2, Apartment* ap3, Apartment* ap4, Apartment* ap5)
{
    ptrAp[0] = ap1;
    ptrAp[1] = ap2;
    ptrAp[2] = ap3;
    ptrAp[3] = ap4;
    ptrAp[4] = ap5;
}

void House::SearchApart(int numA)
{
    for (size_t i = 0; i < lengthAp; i++) {
        if (ptrAp[i]->NumbAp() == numA) {
            ptrAp[i]->OutAll();
        }
    }
}

void House::OutAp()
{
    for (size_t i = 0; i < lengthAp; i++) {
        ptrAp[i]->OutAll();
    }
}

void House::DelAll()
{
    for (size_t i = 0; i < lengthAp; i++) {
        delete[]ptrAp[i];
    }
    delete[]ptrAp;
}


