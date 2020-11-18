//ANDREI CALIN ADRIAN 323AA
#ifndef PRODUS_H
#define PRODUS_H
#include <iostream>
#include <string.h>
using namespace std;

class Produs {

protected:
    string cod;
    int pret;

public:
    Produs();
    Produs(string, int);
    Produs(const Produs&);
    ~Produs();

    Produs& operator = (const Produs&);

    void afisare(const Produs&) const;

};


#endif PRODUS_H

