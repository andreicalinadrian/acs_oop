//ANDREI CALIN ADRIAN 323AA
#include <iostream>
#include <string.h>
#include <cstdlib>
#include "produs.h"
#include "electrocasnic.h"
#include "tv.h"

using namespace std;


TV::TV()
{
    diagonal = 0;
    info_suplimentare = NULL;

}

TV::~TV()
{
    delete info_suplimentare;
}

TV::TV(const TV& input)
{
    *this = input;
}

TV::TV(string inputCod, int inputPret, char* inputMarca, double inputDiagonal, char* inputInfo) : Electrocasnic(inputCod, inputPret, inputMarca)
{
    diagonal = inputDiagonal;
    info_suplimentare = new char[strlen(inputInfo)+1];
    strcpy(info_suplimentare, inputInfo);
}

TV& TV::operator = (const TV& input)
{
    Electrocasnic::operator=(input);

    diagonal = input.diagonal;

    if (info_suplimentare != NULL)
    {
        delete[] info_suplimentare;
    }
    info_suplimentare = new char[strlen(input.info_suplimentare)+1];
    strcpy(info_suplimentare, input.info_suplimentare);

    return *this;
}

istream &operator >>(istream &input, TV &tv)
{
    cout << "INTRODUCETI COD : ";
    input >> tv.cod;
    cout << "INTRODUCETI PRET : ";
    input >> tv.pret;
    cout << "INTRODUCETI MARCA : ";
    char buf[100];
    input >> buf;
    tv.marca = new char [strlen(buf)+1];
    strcpy(tv.marca, buf);
    cout << "INTRODUCETI DIAGONALA : ";
    input >> tv.diagonal;
    cout << "INTRODUCETI INFO SUPLIMENTARE : ";
    char buff[100];
    input >> buff;
    tv.info_suplimentare = new char [strlen(buff)+1];
    strcpy(tv.info_suplimentare, buff);

    return input;
}

ostream &operator <<(ostream &output, const TV &tv)
{
    output  << " COD : " << tv.cod << " PRET : " << tv.pret << endl
            << " MARCA : " << tv.marca << endl
            << " DIAGONALA : " << tv.diagonal << " INFO SUPLIMENTARE : " << tv.info_suplimentare << endl;


    return output;
}

double TV::get_diag() const
{
    return diagonal;
}

void sort_diag(TV tv[], int dim)
{
    TV aux;
    for (int i = 0; i < dim-1; i++)
        for (int j = i+1; j < dim; j++)
    {
        if(tv[i].get_diag() > tv[j].get_diag())
        {
            aux = tv[i];
            tv[i] = tv[j];
            tv[j] = aux;
        }
    }
}

int TV::get_pret() const
{
    return pret;
}

char* TV::get_marca() const
{
    return marca;
}

string TV::get_cod() const
{
    return cod;
}

void afisare_etc(TV tv[], int dim)
{
    for (int i = 0; i < dim; i ++)
    {
        if((tv[i].get_pret() >= 150) && (strcmp(tv[i].get_marca(),"LG") == 0) && (tv[i].get_cod().find("a1") != string::npos))
        cout << tv[i];
    }
}

void TV::afisare(const TV &tv) const
{
    cout << "DIAGONALA : " << tv.diagonal <<endl;
    cout << "INFO SUPLIMENTARE : " << tv.info_suplimentare;
}


