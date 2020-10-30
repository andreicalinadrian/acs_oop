//ANDREI CALIN-ADRIAN 323AA LAB3
#include<cstdlib>
using namespace std;
class Angajat{
char* nume;
char CNP[13];
int salariu;
public:
    Angajat();
    Angajat(char*,char[],int);
    Angajat(const Angajat&);
    ~Angajat();
    char* getNume() const;
    void afisare() const;
    void modifica();
    void modificare(const Angajat&);
    int getSalariu() const;
    bool eFemeie() const;
};
