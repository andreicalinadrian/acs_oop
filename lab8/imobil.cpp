//ANDREI CALIN ADRIAN 323AA
#include <iostream>
#include <cstdlib>
#include <string>
#include "proprietate.h"
#include "imobil.h"
#include "teren.h"
#include <fstream>

using namespace std;


Imobil::Imobil(char* inputCod, string inputAdresa, double inputValoare, double inputVenit, string* inputImb, int inputNrImb) : Proprietate(inputCod, inputAdresa, inputValoare)
{
    venit_pe_an = inputVenit;
    nr_imbunatatiri = inputNrImb;
    imbunatatiri = new string [inputNrImb];
    for (int i = 0; i<inputNrImb; i++)
    {
        imbunatatiri[i] = inputImb[i];
    }
}

Imobil& Imobil::operator=(const Imobil& im)
{
    Proprietate::operator=(im);

    venit_pe_an = im.venit_pe_an;
    nr_imbunatatiri = im.nr_imbunatatiri;
    for (int i = 0; i<im.nr_imbunatatiri; i++)
    {
        imbunatatiri[i] = im.imbunatatiri[i];
    }
}

double Imobil::get_venit_lunar()
{
    return venit_pe_an / 12;
}

double Imobil::get_valoare()
{
    return valoare;
}

void Imobil::afisare(ofstream& fout)
{
    fout << cod << " " << adresa << " " << valoare << nr_imbunatatiri << " ";
    for (int i = 0; i < nr_imbunatatiri; i++)
    {
        fout << imbunatatiri[i] << " ";
    }
    fout << endl;
}

