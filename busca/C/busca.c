#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "func.h"

void printArray(char *str, int V[], int n)
{
    printf("%s", str);
    for (int i = 0; i < n; i++) {
        printf("%5d", V[i]);
    }
    puts("");
}

int compare(const void *a, const void *b)
{
    int ret;
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x == y)
        return 0;
    else if (x < y)
        return -1;
    else
        return 1;

}

int main()
{
    int tam = 999999;
    int V[tam];
    clock_t tic, toc;

    srand(time(NULL));

    printf("\t+ Criando vetor de inteiros ... ");
    tic = clock();
    for (int i = 0; i < tam; i++)
        V[i] = (rand() % 1001) - 500;
    toc = clock();
    printf("\tOK - %fs\n", (double)(toc - tic) / CLOCKS_PER_SEC);

    printf("\t+ Ordenando vetor de inteiros ... ");
    tic = clock();
    qsort(V, tam, sizeof(int), compare);
    toc = clock();
    printf("\tOK - %fs\n", (double)(toc - tic) / CLOCKS_PER_SEC);

    int valor = 99;

    printf("\t+ Busca linear pelo valor %d ... ", valor);
    tic = clock();
    int encontrado = linearSearch(V, tam, valor);
    toc = clock();
    printf("\tOK - %fs\n", (double)(toc - tic) / CLOCKS_PER_SEC);

    if (encontrado)
        printf("Número %d encontrado.\n", valor);
    else
        printf("Número %d não encontrado.\n", valor);

    return 0;
}
