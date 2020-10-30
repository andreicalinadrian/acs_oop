//ANDREI CALIN-ADRIAN 323AA LAB3
#include <iostream>
#include <string.h>
#include<cstdlib>
#include "Angajat.h"
using namespace std;

int main()
{
    int nr, nrFem = 0;
    cout<<"Introduceti numarul angajatilor: ";
    cin>>nr;

    Angajat *ang = new Angajat[nr];
    cout<<"----------------------------------"<<endl;
    for (int i = 0; i < nr; i++)
    {
        ang[i].modifica();
    }
    cout<<"----------------------------------"<<endl;
    for (int i = 0; i < nr; i++)
    {
        ang[i].afisare();
    }
    cout<<"----------------------------------"<<endl;
    for (int i = 0; i < nr; i++)
    {
        if(ang[i].eFemeie() == true)
            nrFem++;
    }
    cout<<"Numarul Femeilor este: "<<nrFem<<endl;
    cout<<"Numarul Barbatilor este: "<<nr-nrFem<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Angajatii cu salariul mai mare de 3000: "<<endl;
    for (int i = 0; i < nr; i++)
    {
        if(ang[i].getSalariu() > 3000)
            ang[i].afisare();
    }
    cout<<"----------------------------------"<<endl;
    int a,b;
    cout<<"Numarul angajatului inlocuit: ";cin>>a;
    cout<<"Numarul angajatului cu care se inlocuieste: ";cin>>b;
    ang[a].modificare(ang[b]);
    cout<<"----------------------------------"<<endl;
    cout<<"Sortare: "<<endl;
    Angajat *aux;
    aux = new Angajat[1];

    for (int i = 0 ; i < nr-1; i++)
        for (int j = i + 1; j < nr; j++)
        {
            if (strcmp(ang[i].getNume(),ang[j].getNume()) < 0)
            {
                aux[0] = ang[i];
                ang[i] = ang[j];
                ang[j] = ang[0];
            }
        }
    for (int i = 0; i < nr; i++)
    {
        ang[i].afisare();
    }
    cout<<"----------------------------------"<<endl;

    return 0;
}
