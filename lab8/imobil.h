//ANDREI CALIN ADRIAN 323AA
#ifndef IMOBIL_H
#define IMOBIL_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "proprietate.h"

using namespace std;

class Imobil : public Proprietate {

    double venit_pe_an; //venitul generat de imobil prin inchiriere pe an
    string *imbunatatiri; // vector cu imbunatatiri: centrala, parc in apropiere, etc
    int nr_imbunatatiri; //da dimensiunea vectorului imbunatatiri

public:

    Imobil(char*, string, double, double, string*, int);
    Imobil& operator = (const Imobil&);

    double get_venit_lunar();
    double get_valoare();
    void afisare(ofstream&);


}; // venitul generat de un imobil pe luna este venit_pe_an/12






#endif IMOBIL_H
