//ANDREI CALIN ADRIAN 323AA
#include <iostream>
#include <cstdlib>
#include <string.h>
#include "proprietate.h"
#include "imobil.h"
#include "teren.h"
#include <fstream>

using namespace std;


Proprietate::Proprietate(char* inputcod, string inputadresa, double inputvaloare)
{
    strcpy(cod,inputcod);
    adresa = inputadresa;
    valoare = inputvaloare;
}

Proprietate::Proprietate(Proprietate&p)
{
    strcpy(cod,p.cod);
    adresa = p.adresa;
    valoare = p.valoare;
}

Proprietate& Proprietate::operator = (const Proprietate &p)
{
    strcpy(cod,p.cod);
    adresa = p.adresa;
    valoare = p.valoare;
}

double Proprietate::get_venit_lunar()
{
    return 0;
}

double Proprietate::get_valoare()
{
    return valoare;
}

/*
void Proprietate::set_data(char* inputcod, string inputadresa, double inputvaloare)
{
    strcpy(cod,inputcod);
    adresa = inputadresa;
    valoare = inputvaloare;
}*/

void Proprietate::afisare(ofstream& fout)
{
    fout << cod << " " << adresa << " " << valoare << endl;
}
