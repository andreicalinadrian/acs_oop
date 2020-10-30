//Andrei Calin-Adrian 323AA Problema 2

#include <stdio.h>
#include <stdlib.h>

void AlocareMatrice (int ***m, int l, int c)
{
    *m = (int**)calloc(l, sizeof(int*));
    for(int i = 0; i < l; i++)
        *(*m+i) = (int*)calloc(c, sizeof(int));
}

void CitireMatrice (int ***m, int l, int c)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = i; j < c; j++)
        {
            printf ("Introduceti elementele de pe linia %d si coloana %d:",i+1,j+1);
            scanf ("%d",*(*(m+i)+j));
        }
    }
}

int** MatricePatrat (int ***m, int ***p, int l, int c)
{
    if(l != c)
        return NULL;
    else
    {
        for (int i = 0; i < l; i++)
        {
        for (int j = i; j < c; j++)
            {
            for (int k = 0;k < l; k++)
                *(*(*p+i)+j)+=(*(*(*m+i)+k)) * (*(*(*m+k)+j));
            }
        }
    }
}

int SumaDiagonala (int ***m, int l, int c)
{
    int s = 0;
    for (int i = 0; i < l; i++)
        s = s + *(*(*m+i)+i);
    return s;
}

void AfisareMatrice (int ***m, int l, int c)
{
    for(int i = 0; i < l; i++)
        {
            for(int j = 0 ; j < c ; j++)
                printf("%d ", *(*(*m+i)+j));
            printf("\n");
        }
}

int main()
{
    int l, c;
    int **m, **p;
    int a = 0;

    AlocareMatrice (&m, l, c);
    CitireMatrice (&m, l, c);
    printf("Matricea este: "); AfisareMatrice (&m, l, c);
    printf("Pentru suma elementelor de pe diagonala principala introduceti 1;\n Pentru ridicarea matricei la patrat introduceti 2: ");
    scanf("%d", &a);
    switch (a)
    {
        case 1:
            printf("Suma elementelor de pe diagonala principala este: %d", SumaDiagonala(&m, l, c));
            break;
        case 2:
            AlocareMatrice (&p, l, c);
            **p = MatricePatrat (&m, &p, l, c);
            printf("Matricea ridicata la patrat este: "); AfisareMatrice (&p, l, c);
            break;
    }

    return 0;
}
