#include <stdio.h>

size_t persistence (unsigned int x )
{
    const unsigned int Base = 10;

    if (! (x < Base))
    {
        unsigned int n = 1;
        do { n += x % Base;} while (x/=Base);
        return 1 + persistence (n);
    }
    else
     {
         return 0;
    }
}

int main (void)
{
    unsigned int number;
    
    printf ("Ingrese los digitos que desee:");
    scanf ("%d", &number);

    printf ("La persistencia es: %d", persistence (number));

    return 0;
}

