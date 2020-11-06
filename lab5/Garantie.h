//ANDREI CALIN ADRIAN 323AA
#ifndef GARANTIE_H
#define GARANTIE_H
#include<iostream>
using namespace std;
class Garantie{
  int nr_luni;
  char* service;

public:
    Garantie();
    Garantie(int, char*);
    Garantie(const Garantie&);
    Garantie& operator =(const Garantie&);
    ~Garantie();

    int getLuni() const;
    char* getService() const;

    friend ostream &operator <<(ostream &output, const Garantie &g);
    friend istream &operator >>(istream &input, Garantie &g );

};

#endif GARANTIE_H
