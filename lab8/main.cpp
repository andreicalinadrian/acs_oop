//ANDREI CALIN ADRIAN 323AA
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "proprietate.h"
#include "imobil.h"
#include "teren.h"

ofstream fout("out.txt");

using namespace std;

int main()
{
    int n;
    cout << "DIMENSIUNE VECTOR : "; cin >> n;

    Proprietate **v = new Proprietate*[n];
    for (int i = 0; i < n; i ++)
    {
        cout << "INTRODUCETI TIPUL OBIECTULUI " << i+1 << endl;
        cout << "Proprietate (1), Imobil (2), Teren (3) : ";
        int tip; cin >> tip;

        if(tip == 1) ///PROPRIETATE
        {
            cout << "INTRODUCETI COD : ";
            char cod[6]; cin >> cod;
            cout << "INTRODUCETI ADRESA : ";
            string adresa; cin >> adresa;
            cout << "INTRODUCETI VALOAREA : ";
            double valoare; cin >> valoare;

            v[i] = new Proprietate(cod, adresa, valoare);
        }

        else if(tip == 2) ///IMOBIL
        {
            cout << "INTRODUCETI COD : ";
            char cod[6]; cin >> cod;
            cout << "INTRODUCETI ADRESA : ";
            string adresa; cin >> adresa;
            cout << "INTRODUCETI VALOAREA : ";
            double valoare; cin >> valoare;
            cout << "INTRODUCETI VENITUL PE AN : ";
            double venit; cin >> venit;
            cout << "INTRODUCETI NUMARUL DE IMBUNATATIRI : ";
            int nrimb; cin >> nrimb;
            cout << "INTRODUCETI IMBUNATATIRILE : " << endl;
            string* imb = new string[nrimb];
            for(int j = 0; j < nrimb; j++)
            {
                cout << "IMBUNATATIRE " << j+1 << " : ";
                cin >> imb[j];
            }
            v[i] = new Imobil(cod, adresa, valoare, venit, imb, nrimb);
        }

        else if(tip == 3) ///TEREN
        {
            cout << "INTRODUCETI COD : ";
            char cod[6]; cin >> cod;
            cout << "INTRODUCETI ADRESA : ";
            string adresa; cin >> adresa;
            cout << "INTRODUCETI VALOAREA : ";
            double valoare; cin >> valoare;
            cout << "INTRODUCETI VENITUL PE LUNA PE M2 : ";
            double venit; cin >> venit;
            cout << "INTRODUCETI SUPRAFATA : ";
            double sup; cin >> sup;

            v[i] = new Teren(cod, adresa, valoare, venit, sup);

        } else i--;
    }

    fout << "=======================================" << endl;
    fout << "VECTORUL ESTE : " << endl;
    for(int i = 0; i < n; i++)
    {
        v[i]->afisare(fout);
    }
    fout << "=======================================" << endl;

    Proprietate *aux;

    for(int i = 0; i < n - 1; i ++)
        for(int j = i+1; j < n; j++)
        {
            if( (*v[i]).get_venit_lunar() > v[j]->get_venit_lunar()) //  :)
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    fout << "VECTORUL SORTAT ESTE : " << endl;
    for(int i = 0; i < n; i++)
    {
        v[i]->afisare(fout);
    }
    fout << "=======================================" << endl;

    fout << "AFISARE ELEM. CU VAL. > 10000 : " << endl;
    for(int i = 0; i < n; i++)
    {
        if(v[i]->get_valoare() > 10000 )
            v[i]->afisare(fout);
    }
    fout << "=======================================" << endl;

    fout.close();

    return 0;
}
