//Andrei Calin-Adrian 323AA Problema 4

#include <stdio.h>
#include <stdlib.h>

void AfisareInversa()
{
    float n;
    scanf("%f",&n);
    if (n != -1)
        AfisareInversa();
    printf("%f ",n);
}

int main()
{
    AfisareInversa();

    return 0;
}
