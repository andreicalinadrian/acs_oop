//ANDREI CALIN ADRIAN 323AA
#include <iostream>
#include <string.h>
#include <cstdlib>
#include "produs.h"
#include "electrocasnic.h"
#include "tv.h"

using namespace std;

int main()
{
    cout << "======================================" << endl;

    int n;
    cout << "INTRODUCETI NUMARUL DE TELEVIZOARE : "; cin >> n;

    TV* tv;
    tv = new TV[n];
    for (int i = 0; i < n; i ++)
    {
        cout << "CITIRE DATE TELEVIZOR NUMARUL " << i+1 << " : " <<endl;
        cin >> tv[i];
    }
    cout << "======================================" << endl;

    cout << "SORTARE TV DUPA DIAGONALA : " << endl;
    sort_diag(tv,n);

    for(int i =0; i < n; i ++)
        cout<<tv[i];

    cout << "======================================" << endl;

    cout << "AFISARE TV CU PRET >= 150 , MARCA = LG , COD CONTINE a1 : " << endl;
    afisare_etc(tv,n);

    cout << "======================================" << endl;

    return 0;
}
