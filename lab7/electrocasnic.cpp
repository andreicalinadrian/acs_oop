//ANDREI CALIN ADRIAN 323AA
#include <iostream>
#include <string.h>
#include <cstdlib>
#include "produs.h"
#include "electrocasnic.h"

using namespace std;

Electrocasnic::Electrocasnic()
{
    marca = NULL;
}

Electrocasnic::~Electrocasnic()
{
    delete marca;
}

Electrocasnic::Electrocasnic(string inputCod, int inputPret, char* inputMarca) : Produs(inputCod, inputPret)
{

    marca = new char[strlen(inputMarca)+1];
    strcpy(marca, inputMarca);

};

Electrocasnic::Electrocasnic(const Electrocasnic& input)
{
    *this = input;
}

Electrocasnic& Electrocasnic::operator = (const Electrocasnic &input)
{
    Produs::operator=(input);

    if (marca != NULL)
    {
        delete[] marca;
    }
    marca = new char[strlen(input.marca)+1];
    strcpy(marca, input.marca);

    return *this;
}

void Electrocasnic::afisare(const Electrocasnic& e) const
{
    cout << "MARCA : " << e.marca;
}
