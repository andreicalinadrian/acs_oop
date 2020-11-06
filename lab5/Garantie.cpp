//ANDREI CALIN ADRIAN 323AA
#include <iostream>
#include <string.h>
#include <cstdlib>
#include "Produs.h"
#include "Garantie.h"
using namespace std;

Garantie::Garantie()
{
    nr_luni = 0;
    service = NULL;

}

Garantie::Garantie(int inputNr, char* inputService)
{
    nr_luni = inputNr;
    service = new char[strlen(inputService)+1];
    strcpy(service, inputService);
}

Garantie::Garantie(const Garantie &input)
{
    nr_luni = input.nr_luni;
    if (service != NULL)
    {
        delete[] service;
    }
    service = new char[strlen(input.service)+1];
    strcpy(service, input.service);
}

Garantie& Garantie::operator = (const Garantie &input)
{
    nr_luni = input.nr_luni;
    if (service != NULL)
    {
        delete[] service;
    }
    service = new char[strlen(input.service)+1];
    strcpy(service, input.service);

    return *this;
}

Garantie::~Garantie()
{
    delete service;
}

istream &operator >>(istream &input, Garantie &g )
{
    cout<<"Introduceti numar luni service: ";
    input >> g.nr_luni;
    cout<<"introduceti service: ";
    char buf[100];
    input >> buf;
    g.service = new char [strlen(buf)+1];
    strcpy(g.service, buf);

    return input;
}

ostream &operator <<(ostream &output, const Garantie &g)
{
    output << " Numar luni: " << g.nr_luni << " Service: " << g.service;
    return output;
}

int Garantie::getLuni() const
{
    return nr_luni;
}

char* Garantie::getService() const
{
    return service;
}
