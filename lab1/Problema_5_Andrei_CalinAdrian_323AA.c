//Andrei Calin-Adrian 323AA Problema 5

#include <stdio.h>
#include <stdlib.h>

struct complexe
{
    double real;
    double imaginar;
    struct complex *urm;
};

int* AlocareVector (struct complexe *v, int n)
{
	v = (struct complexe*) calloc (n, sizeof(struct complexe));
    for (int *i = v; i < v+n; i++)
        *i = 0;
    return v;
}

void CitireVector (struct complexe *v, int n)
{
	printf ("Introduceti Elementele Vectorului:\n");
    for (int i = 0; i < n; i++)
        {
            printf("Introduceti partea reala a elementului de pe pozitia %d: ",i+1);
            scanf ("%lf",v[i].real);
            printf("Introduceti partea imaginara a elementului de pe pozitia %d: ",i+1);
            scanf ("%lf",v[i].imaginar);
        }
}

void ModificareElement (struct complexe *v, int a)
{
    printf("Introduceti partea reala a elementului de pe pozitia %d: ",a);
    scanf ("%lf",v[a].real);
    printf("Introduceti partea imaginara a elementului de pe pozitia %d: ",a);
    scanf ("%lf",v[a].imaginar);
}

struct complexe SumaElemente (struct complexe *v, int n)
{
    struct complexe s;
    for (int i = 0; i < n; i++)
    {
        s.real += v[i].real;
        s.imaginar += v[i].imaginar;
    }
    return s;
}

int main()
{
    int n, a;
    struct complexe *v;
	printf ("Dimensiunea Vectorului: ");
    scanf ("%d",&n);

    v = AlocareVector(v,n);
    CitireVector(v,n);
    printf ("Suma parte reala este %lf \n Suma parte imaginara este %lf", SumaElemente(v,n).real, SumaElemente(v,n).imaginar);

    printf ("Care este pozitia elementului pe care doriti sa il modificati?");
    scanf ("%d",&a);
    ModificareElement(v,a);
}
