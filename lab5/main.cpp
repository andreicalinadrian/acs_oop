//ANDREI CALIN ADRIAN 323AA
#include <iostream>
#include <string.h>
#include <cstdlib>
#include "Produs.h"
#include "Garantie.h"

using namespace std;

int main()
{

    cout<<"-----------------------------------------"<<endl;
    int n;
    cout<<"INTRODUCETI NUMARUL DE PRODUSE : ";
    cin>>n;

    Produs* pv;
    pv = new Produs[n];

    for (int i = 0; i < n; i ++)
    {
        cout<<"CITIRE PRODUS NUMARUL "<<i+1<<" : "<<endl;
        cin>>pv[i];
    }
    cout<<"-----------------------------------------"<<endl;

    cout<<"SORTARE VECTOR DUPA PRET : "<<endl;

    sortPret(pv,n);

    for (int i = 0; i < n; i ++)
        cout<< pv[i];

    cout<<"-----------------------------------------"<<endl;

    cout<<"AFISARE PRODUSE CU GARANTIA > 12 LUNI : "<<endl;
    afisareGarantie(pv,n);

    cout<<"-----------------------------------------"<<endl;

    cout<<"AFISARE PRODUSE CU GARANTIA LA SerVice : "<<endl;
    afisareService(pv,n);

    cout<<"-----------------------------------------"<<endl;




    return 0;
}
