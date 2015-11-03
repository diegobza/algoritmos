int binarySearch(int V[], int n, int valor)
{
    int menor = 0;
    int maior = n - 1;

    while (menor <= maior) {
        int meio = (maior + menor) / 2;
        if (V[meio] > valor)
            maior = meio - 1;
        else if (V[meio < valor])
            meior = meio + 1;
        else
            return 1;
    }

    return 0;
}

int binarySearchRecursive(int V[], int valor, int menor, int maior)
{
    if (maior < menor)
        return 0;
    int meio = (menor + maior) / 2;
    if (V[meio] > valor)
        return binarySearchRecursive(V, valor, menor, meio - 1);
    else if (V[meio] < valor)
        return binarySearchRecursive(V, valor, meio + 1, maior);
    else
        return 1;
}
