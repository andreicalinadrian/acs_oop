//ANDREI CALIN-ADRIAN 323AA LAB3
#include <iostream>
#include <string.h>
#include <cstdlib>
#include "Angajat.h"
using namespace std;

Angajat::Angajat()
{
    nume = NULL;
    strcpy(CNP,"0000000000000");
    salariu = 0;
}

Angajat::Angajat(char* inputNume, char inputCnp[], int inputSalariu)
{
    if(inputNume == NULL)
        nume = NULL;
    else
    {
        nume = new char [strlen(inputNume)+1];
        strcpy (nume,inputNume);
    }
    strcpy(CNP,inputCnp);
    salariu = inputSalariu;
}

Angajat::Angajat(const Angajat &input)
{
    if (input.nume == NULL)
        nume = NULL;
    else
    {
        nume = new char[strlen(input.nume)+1];
        strcpy(nume, input.nume);
    }
    strcpy(CNP,input.CNP);
    salariu = input.salariu;
}

void Angajat::afisare() const
{

    cout<<"Nume: "<<nume<<endl;
    cout<<"CNP: "<<CNP<<endl;
    cout<<"Salariu: "<<salariu<<endl<<endl;

}

void Angajat::modifica()
{
    char buf[50];
    cout<<"Introduceti NUMELE angajatului: ";
    cin>>buf;
    nume = new char[strlen(buf)+1];
    strcpy(nume,buf);
    cout<<"Introduceti CNP-ul angajatului: ";
    cin>>CNP;
    cout<<"Introduceti SALARIUL angajatului: ";
    cin>>salariu;
}

void Angajat::modificare(const Angajat &input)
{
    if (input.nume == NULL)
        nume = NULL;
    else
    {
        nume = new char[strlen(input.nume)+1];
        strcpy(nume,input.nume);
    }
    strcpy (CNP,input.CNP);
    salariu = input.salariu;
}

int Angajat::getSalariu() const
{
    return salariu;
}

char* Angajat::getNume() const
{
    return nume;
}

bool Angajat::eFemeie() const
{
    if(CNP[0]=='2' || CNP[0]=='6')
        return true;
    else return false;
}

Angajat::~Angajat()
{
    if (nume != NULL)
    delete[] nume;
}
