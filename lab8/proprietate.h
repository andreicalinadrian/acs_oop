//ANDREI CALIN ADRIAN 323AA
#ifndef PROPRIETATE_H
#define PROPRIETATE_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

class Proprietate {

protected:
    char cod[6];
    string  adresa;
    double valoare;

public:

    Proprietate() = default;
    Proprietate(char*, string, double );
    Proprietate(Proprietate &);
    ~Proprietate() = default;
    Proprietate& operator = (const Proprietate&);

    virtual double get_venit_lunar();
    virtual double get_valoare();
    virtual void afisare(ofstream&);

    // void set_data(char*, string, double );


};//venitul generat de o proprietate pe luna e 0





#endif PROPRIETATE_H
