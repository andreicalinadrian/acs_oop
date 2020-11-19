//ANDREI CALIN ADRIAN 323AA
#ifndef TEREN_H
#define TEREN_H

#include "proprietate.h"
#include "imobil.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

class Teren : public Proprietate {

    double venit_pe_luna_m2; //venitul generat de imobil prin inchiriere pe luna a unui metru patrat
    double suprafata; //in metrii patrati
public:
    Teren(char*, string, double, double, double);
    Teren& operator = (const Teren&);

    double get_venit_lunar();
    double get_valoare();
    void afisare(ofstream &);

};// venitul generat de un teren pe luna este venit_pe_luna_m2*suprafata



#endif TEREN_H
