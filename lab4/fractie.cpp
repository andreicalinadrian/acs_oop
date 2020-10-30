//ANDREI CALIN-ADRIAN 323AA LAB4
#include <iostream>
#include <string.h>
#include <cstdlib>
#include "fractie.h"

using namespace std;

fractie::fractie(int x, int y)
{
    a = x;
    b = y;
}

fractie::fractie(const fractie &input)
{
    a = input.a;
    b = input.b;
}

fractie& fractie::operator =(const fractie &input)
{
    a = input.a;
    b = input.b;
}

fractie::~fractie()
{

}

void fractie::afis()const
{
    cout<<"Fractia este: "<<a<<"/"<<b<<endl;
}

double fractie::getValoare()
{
    return a/b;
}

fractie fractie::getInv()
{
    fractie aux;
    aux.b = a;
    aux.a = b;
    return aux;

}

void fractie::setdata(int x, int y)
{
    a = x;
    b = y;
}

float fractie::getA()
{
    return a;
}

float fractie::getB()
{
    return b;
}

const fractie operator +(const fractie &input1, const fractie &input2)
{
    fractie aux;
    aux.a = input1.a*input2.b + input2.a*input1.b;
    aux.b = input1.b*input2.b;
    return aux;
}

const fractie operator -(const fractie &input1, const fractie &input2)
{
    fractie aux;
    aux.a = input1.a*input2.b - input2.a*input1.b;
    aux.b = input1.b*input2.b;
    return aux;
}

const fractie operator -(const fractie &input)
{
    fractie aux;
    aux.a = -input.a;
    aux.b = input.b;

    return aux;
}

const fractie operator *(const fractie &input1, const fractie &input2)
{
    fractie aux;
    aux.a = input1.a*input2.a;
    aux.b = input1.b*input2.b;
    return aux;
}

const fractie operator /(const fractie &input1, const fractie &input2)
{
    fractie aux;
    aux.a = input1.a*input2.b;
    aux.b = input1.b*input2.a;
    return aux;
}


fractie& fractie::operator +=(const fractie &input)
{
    a = a*input.b + b*input.a;
    b = b*input.b;
    return *this;
}

fractie& fractie::operator -=(const fractie &input)
{
    a = a*input.b - b*input.a;
    b = b*input.b;
    return *this;
}

fractie& fractie::operator *=(const fractie &input)
{
    a = a*input.a;
    b = b*input.b;
    return *this;
}

fractie& fractie::operator /=(const fractie &input)
{
    a = a*input.b;
    b = b*input.a;
    return *this;
}


bool operator ==(const fractie &input1, const fractie &input2)
{
    fractie aux;
    aux = input1/input2;

    if( aux.a/aux.b == 1 )
        return true;
    else return false;
}

bool operator !=(const fractie &input1, const fractie &input2)
{
    return (!(input1==input2));
}

bool operator >(const fractie &input1, const fractie &input2)
{
    /*float aux1, aux2;
    aux1 = input1.a/input1.b;
    aux2 = input2.a/input2.b;

    if ( aux1 > aux2 )
        return true;
    else return false;*/
    fractie aux;
    aux = input1/input2;

    if( aux.a/aux.b > 1 )
        return true;
    else return false;
}

bool operator <(const fractie &input1, const fractie &input2)
{
    /*float aux1, aux2;
    aux1 = input1.a/input1.b;
    aux2 = input2.a/input2.b;

    if ( aux1 < aux2 )
        return true;
    else return false;*/
    fractie aux;
    aux = input1/input2;

    if( aux.a/aux.b < 1 )
        return true;
    else return false;
}

bool operator >=(const fractie &input1, const fractie &input2)
{
    return(!(input1<input2));
}

bool operator <=(const fractie &input1, const fractie &input2)
{
    return(!(input1>input2));
}
