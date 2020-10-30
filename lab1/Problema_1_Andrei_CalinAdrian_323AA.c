//Andrei Calin-Adrian 323AA Problema 1

#include <stdio.h>
#include <stdlib.h>


int* AlocareVector (int *v, int n)
{
	v = (int*) calloc (n, sizeof(int));
    for (int *i = v; i < v+n; i++)
        *i = 0;
    return v;
}

int* CitireVector (int *v, int n)
{
	printf ("Introduceti Elementele Vectorului:\n");
    for (int *i = v; i < v+n; i++)
        scanf ("%d",i);
    return v;
}

int* SortareVector (int *v, int n)
{
    int aux = 0;
    for (int *i = v; i < v+n-1; i++)
        for (int *j = i+1; j < v+n; j++)
        {
            if (*i > *j)
            {
                aux = *i;
                *i = *j;
                *j = aux;
            }
        }
    return v;
}

void AfisareVector (int *v, int n)
{
    for (int *i = v; i < v+n; i++)
        printf ("%d ",*i);
}

int main()
{
	int n, *v;
	printf("Dimensiunea Vectorului: ");
    scanf("%d",&n);

    v = AlocareVector(v, n);
    for (int *i = v; i < v+n; i++)
        printf ("%d ",*i);
    printf ("\n");

    v = CitireVector(v, n);
    printf ("Vectorul este: ");
    for (int *i = v; i < v+n; i++)
        printf ("%d ",*i);
    printf ("\n");

    v = SortareVector(v, n);
    printf ("Vectorul sortat este: ");
    for (int *i = v; i < v+n; i++)
        printf ("%d ",*i);
    printf ("\n");

    AfisareVector(v, n);

    return 0;
}
