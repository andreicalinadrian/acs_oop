//ANDREI CALIN ADRIAN 323AA
#include <iostream>
#include <string.h>
#include <cstdlib>
#include "produs.h"

using namespace std;

Produs::Produs()
{
    cod = "";
    pret = 0;
}

Produs::~Produs()
{

}

Produs::Produs(string inputCod, int inputPret)
{
    cod = inputCod;
    pret = inputPret;
}

Produs::Produs(const Produs& input)
{
    *this = input;
}

Produs& Produs::operator = (const Produs& input)
{
    cod = input.cod;
    pret = input.pret;

    return *this;
}

void Produs::afisare(const Produs& p) const
{
    cout << "COD : " << p.cod << endl;
    cout << "PRET : " << p.pret;
}
