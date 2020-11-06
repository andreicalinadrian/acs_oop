//ANDREI CALIN ADRIAN 323AA
#include <iostream>
#include <string.h>
#include <cstdlib>
#include "Produs.h"
#include "Garantie.h"
using namespace std;

Produs::Produs()
{
    pret = 0;
    marca = NULL;
    nr_proprietati = 0;
}

Produs::Produs(int inputPret, char* inputMarca, int inputNr)
{
    pret = inputPret;
    marca = new char [strlen(inputMarca)+1];
    strcpy(marca, inputMarca);
    nr_proprietati = inputNr;
}


Produs::Produs(const Produs& input)
{
    pret = input.pret;
    if (marca != NULL)
    {
        delete[] marca;
    }
    marca = new char[strlen(input.marca)+1];
    strcpy(marca, input.marca);
    nr_proprietati = input.nr_proprietati;
    this->g = input.g;
}

Produs &Produs::operator = (const Produs& input)
{
    pret = input.pret;
    if (marca != NULL)
    {
        delete[] marca;
    }
    marca = new char[strlen(input.marca)+1];
    strcpy(marca, input.marca);
    nr_proprietati = input.nr_proprietati;
    this->g = input.g;

    return *this;
}

Produs::~Produs()
{
    delete marca;
}

istream &operator >>(istream &input, Produs &p )
{
    cout<<"Introduceti pret : ";
    input >> p.pret;
    cout<<"introduceti marca : ";
    char buf[100];
    input >> buf;
    p.marca = new char [strlen(buf)+1];
    strcpy(p.marca, buf);
    cout<<"introd nr prop : ";
    input >> p.nr_proprietati;
    input >> p.g;

    return input;
}

ostream &operator <<(ostream &output, const Produs &p)
{
    output << " Pret : " << p.pret << " Marca : " << p.marca << " Nr. Prop. :" << p.nr_proprietati;
    output << p.g;

    return output;
}

int Produs::getPret() const
{
    return pret;
}

void sortPret(Produs p[], int dimensiune)
{
    Produs aux;
    for (int i = 0; i < dimensiune-1; i++)
        for (int j = i+1; j < dimensiune; j++)
    {
        if(p[i].getPret() > p[j].getPret())
        {
            aux = p[i];
            p[i] = p[j];
            p[j] = aux;
        }
    }
}

void afisareGarantie(Produs p[], int dimensiune)
{
    for (int i = 0; i < dimensiune; i ++)
    {
        if(p[i].g.getLuni() > 12)
        {
            cout << p[i];
        }
    }
}

void afisareService(Produs p[], int dimensiune)
{
    for (int i = 0; i < dimensiune; i ++)
    {
        if(strcmp(p[i].g.getService(),"SerVice") == 0)
        {
            cout << p[i];
        }
    }
}

