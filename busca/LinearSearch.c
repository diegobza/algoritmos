#include <stdio.h>

int linearSearch(int V[], int n, int val)
{
    for (int i = 0; i < n; i++)
        if (V[i] == val)
            return 1;

    return 0;
}

int main()
{
    int V[] = {4, 10, -3, 8, 1};
    int n = sizeof(V) / sizeof(int);
    int val = 8;

    if (linearSearch(V, n, val))
        printf("Número %d encontrado.", val);
    else
        printf("Número %d não encontrado.", val);

    return 0;
}
