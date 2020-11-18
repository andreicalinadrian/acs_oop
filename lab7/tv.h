//ANDREI CALIN ADRIAN 323AA
#ifndef TV_H
#define TV_H
#include <iostream>
#include <string>
using namespace std;

class TV: public Electrocasnic {

    double diagonal;
    char *info_suplimentare;


public:

    TV();
    TV(string, int, char*, double, char*);
    TV(const TV&);
    ~TV();

    TV& operator = (const TV&);

    friend ostream &operator <<(ostream &output, const TV &tv);
    friend istream &operator >>(istream &input, TV &tv);

    void afisare(const TV&) const;

    double get_diag() const;
    int get_pret() const;
    char* get_marca() const;
    string get_cod() const;
    friend void sort_diag(TV*, int);
    friend void afisare_etc(TV*, int);

};


#endif TV_H

