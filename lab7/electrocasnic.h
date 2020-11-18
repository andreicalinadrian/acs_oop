//ANDREI CALIN ADRIAN 323AA
#ifndef ELECTROCASNIC_H
#define ELECTROCASNIC_H
#include <iostream>
#include <string.h>
using namespace std;

class Electrocasnic : public Produs {

protected:
    char *marca;


public:

    Electrocasnic();
    Electrocasnic(string, int, char*);
    Electrocasnic(const Electrocasnic&);
    ~Electrocasnic();

    Electrocasnic& operator = (const Electrocasnic&);
    void afisare(const Electrocasnic&) const;


};


#endif ELECTROCASNIC_H
