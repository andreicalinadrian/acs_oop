//ANDREI CALIN ADRIAN 323AA
#include <iostream>
#include <cstdlib>
#include <string>
#include "proprietate.h"
#include "imobil.h"
#include "teren.h"
#include <fstream>

using namespace std;


Teren::Teren(char* inputCod, string inputAdresa, double inputValoare, double inputVenit, double inputSup) : Proprietate(inputCod, inputAdresa, inputValoare)
{
    venit_pe_luna_m2 = inputVenit;
    suprafata = inputSup;
}

Teren& Teren::operator=(const Teren& t)
{
    Proprietate::operator=(t);

    venit_pe_luna_m2 = t.venit_pe_luna_m2;
    suprafata = t.suprafata;
}

double Teren::get_venit_lunar()
{
    return venit_pe_luna_m2 * suprafata;
}

double Teren::get_valoare()
{
    return valoare;
}

void Teren::afisare(ofstream& fout)
{
    fout << cod << " " << adresa << " " << valoare << " "
         << venit_pe_luna_m2 << " " << suprafata << endl;
}
