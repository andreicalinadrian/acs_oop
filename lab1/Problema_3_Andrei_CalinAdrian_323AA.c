//Andrei Calin-Adrian 323AA Problema 3

#include <stdio.h>
#include <stdlib.h>

int factorial (int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n-1);
}

int main()
{
    int n;

    printf ("introduceti nr: ");
    scanf ("%d",&n);

    printf ("factorialul numarului este: %d", factorial(n));

    return 0;
}
