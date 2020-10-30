#include <iostream>
#include <string.h>
using namespace std;

struct Student{
private:
int id;
char *nume;
char gr_serie[6];
int note_sem_I[6];
public:
void init();
void afisare() const;
void modifica(const char []);
void modifica(const Student &);
void modifica(int, int);
double medie();
};

void Student::init()
{
    cout<<"ID Student:\n";
    cin>>id;
    cout<<"Nume:\n";
    char aux[100];
    cin>>aux;
    nume = new char [strlen(aux)+1];
    strcpy(nume,aux);
    cout<<"Grupa Serie:\n";
    cin>>gr_serie;
    cout<<"Introduceti 6 note Sem I:\n";
    for (int i = 0; i < 6; i++)
        cin>>note_sem_I[i];
}

void Student::afisare() const
{
    cout<<"ID Student: "<<id<<"\n";
    cout<<"Nume Student: "<<nume<<"\n";
    cout<<"Grupa, Serie Student: "<<gr_serie<<"\n";
    cout<<"Note Student: ";
    for (int i = 0; i < 6; i++)
        cout<<note_sem_I[i]<<" ";
    cout<<"\n";
}

void Student::modifica(const char gr_nou[]) //grupa
{
    strcpy(gr_serie,gr_nou);
}

void Student::modifica(const Student &stud_cpy) //student
{
    id = stud_cpy.id;
    strcpy(nume, stud_cpy.nume);
    strcpy(gr_serie, stud_cpy.gr_serie);
    for (int i=0; i<6; i++)
        note_sem_I[i] = stud_cpy.note_sem_I[i];
}

void Student::modifica(int materie, int nota) //note
{
    note_sem_I[materie] = nota;
}

double Student::medie()
{
    double suma = 0;
    for (int i = 0; i < 6; i++)
    suma += note_sem_I[i];
    suma = suma/6;
    return suma;
}

void sortare(int nr_stud, Student stud[])
{
    Student *aux;
    aux = new Student[1];

    for (int i = 0 ; i < nr_stud-1; i++)
        for (int j = i + 1; j < nr_stud; j++)
        {
            if (stud[i].medie() > stud[j].medie())
            {
                aux[0] = stud[i];
                stud[i] = stud[j];
                stud[j] = aux[0];
            }
        }
}

int main()
{
    int nr_stud;
    cout<<"Introduceti numarul de studenti: ";cin>>nr_stud;

    Student *stud;
    stud = new Student[nr_stud];
    for (int i = 0; i < nr_stud; i++)
    {
        cout<<"Studentul nr "<<i+1<<" :\n";
        stud[i].init();
    }
    for (int i=0; i<nr_stud; i++)
    {
        stud[i].afisare();
    }


    int stud_modif, stud_cpy;
    char gr_nou[6];
    int nota, materie;
    int caz;
    cout<<"Alegeti modificare:\nGrupa noua: 1\nCopiere Student: 2\nModificare Nota: 3\nSortare dupa Medie: 4";cin>>caz;
    switch(caz)
    {
        case 1:
            cout<<"Ce student modific: ";cin>>stud_modif;
            cout<<"Introduceti grupa noua: ";cin>>gr_nou;
            stud[stud_modif].modifica(gr_nou);
        break;

        case 2:
            cout<<"Ce student modific: ";cin>>stud_modif;
            cout<<"Ce student copiez: ";cin>>stud_cpy;
            stud[stud_modif].modifica(stud[stud_cpy]);
        break;

        case 3:
            cout<<"Ce student modific: ";cin>>stud_modif;
            cout<<"ID materie: ";cin>>materie;
            cout<<"Nota modificata: ";cin>>nota;
            stud[stud_modif].modifica(materie, nota);
        break;

        case 4:
            sortare(nr_stud, stud);
            for (int i=0; i<nr_stud; i++)
                {
                    stud[i].afisare();
                }
        break;
    }

    return 0;
}
