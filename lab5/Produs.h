//ANDREI CALIN ADRIAN 323AA
#ifndef PRODUS_H
#define PRODUS_H
#include "Garantie.h"
#include <iostream>
using namespace std;

class Produs{

   int pret;
   char* marca;
   int nr_proprietati;
   Garantie g;

public:
    Produs();
    Produs(int, char*, int);
    Produs(const Produs&);
    Produs& operator =(const Produs&);
    ~Produs();

    int getPret() const;

    friend void sortPret(Produs*, int);
    friend void afisareGarantie(Produs*, int);
    friend void afisareService(Produs*, int);

    friend ostream &operator <<(ostream &output, const Produs &p);
    friend istream &operator >>(istream &input, Produs &p);

};

#endif PRODUS_H
