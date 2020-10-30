//ANDREI CALIN-ADRIAN 323AA LAB4
#include <iostream>
#include <string.h>
#include <cstdlib>
#include "fractie.h"

using namespace std;




int main()
{
    fractie frac1, frac2, rez;

    cout<<"----------------------------------"<<endl;

    frac1.setdata(10,5);
    cout<<"FUNCTIA getValoare (ar trb 2, fractie 10/5)"<<endl;
    cout<<frac1.getValoare()<<endl;

    cout<<"----------------------------------"<<endl;

    cout<<"FUNCTIA getInv (ar trb 5/10)"<<endl;
    frac1.getInv().afis();

    cout<<"----------------------------------"<<endl;

    cout<<"setdata() de la tastatura"<<endl;
    int n1, n2;
    cout<<"introduceti numaratorul: ";cin>>n1;
    cout<<"introduceti numitorul: ";cin>>n2;
    rez.setdata(n1,n2);
    rez.afis();

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR +"<<endl;
    frac1.setdata(1, 2);
    frac2.setdata(2, 5);
    frac1.afis();
    frac2.afis();
    rez = frac1 + frac2;
    rez.afis();

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR -"<<endl;
    frac1.afis();
    frac2.afis();
    rez = frac1 - frac2;
    rez.afis();

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR - cu un parametru"<<endl;
    frac1.setdata(2, 3);
    frac2.setdata(1, 3);
    frac1.afis();
    frac2.afis();
    frac2 =- frac1;
    frac2.afis();

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR *"<<endl;
    frac1.setdata(1, 3);
    frac2.setdata(2, 3);
    frac1.afis();
    frac2.afis();
    rez = frac1 * frac2;
    rez.afis();

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR /"<<endl;
    frac1.setdata(1, 3);
    frac2.setdata(2, 3);
    frac1.afis();
    frac2.afis();
    rez = frac1 / frac2;
    rez.afis();

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR +="<<endl;
    frac1.setdata(1, 3);
    frac2.setdata(2, 3);
    frac1.afis();
    frac2.afis();
    frac1 += frac2;
    frac1.afis();

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR -="<<endl;
    frac1.setdata(2, 3);
    frac2.setdata(1, 3);
    frac1.afis();
    frac2.afis();
    frac1 -= frac2;
    frac1.afis();

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR *="<<endl;
    frac1.setdata(1, 3);
    frac2.setdata(2, 3);
    frac1.afis();
    frac2.afis();
    frac1 *= frac2;
    frac1.afis();

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR /="<<endl;
    frac1.setdata(1, 3);
    frac2.setdata(2, 3);
    frac1.afis();
    frac2.afis();
    frac1 /= frac2;
    frac1.afis();

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR =="<<endl;
    frac1.setdata(5, 5);
    frac1 = frac2;
    frac1.afis();
    frac2.afis();
    if(frac1 == frac2)
        cout<<"true. fractiile sunt egale"<<endl;
    else cout<<"false. fractiile nu sunt egale"<<endl;

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR !="<<endl;
    frac1.setdata(2, 3);
    frac2.setdata(3, 2);
    frac1.afis();
    frac2.afis();
    if(frac1 != frac2)
        cout<<"true. fractiile nu sunt egale"<<endl;
    else cout<<"false. fractiile sunt egale"<<endl;

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR >"<<endl;
    frac1.setdata(1, 3);
    frac2.setdata(2, 3);
    frac1.afis();
    frac2.afis();
    if(frac1 > frac2)
        cout<<"true. fractia1 > fractia2"<<endl;
    else cout<<"false. fractia1 < fractia2"<<endl;

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR <"<<endl;
    frac1.afis();
    frac2.afis();
    if(frac1 < frac2)
        cout<<"true. fractia1 < fractia2"<<endl;
    else cout<<"false. fractia1 > fractia2"<<endl;

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR >="<<endl;
    frac1.afis();
    frac2.afis();
    if(frac1 >= frac2)
        cout<<"true. fractia1 >= fractia2"<<endl;
    else cout<<"false. fractia1 < fractia2"<<endl;

    cout<<"----------------------------------"<<endl;

    cout<<"OPERATOR <="<<endl;
    frac1.afis();
    frac2.afis();
    if(frac1 <= frac2)
        cout<<"true. fractia1 <= fractia2"<<endl;
    else cout<<"false. fractia1 > fractia2"<<endl;

    cout<<"----------------------------------"<<endl;



    return 0;
}
