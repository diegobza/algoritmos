#include <stdio.h>
#include "func.h"

int main()
{
    int V[] = {4, 10, -3, 8, 1};
    int n = sizeof(V) / sizeof(int);
    int val = 8;

    if (linearSearch(V, n, val))
        printf("Número %d encontrado.\n", val);
    else
        printf("Número %d não encontrado.\n", val);

    return 0;
}
