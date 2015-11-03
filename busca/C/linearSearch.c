/*
 * linarSearch.c:
 *     Busca linear iterativa.
 * 
 */

int linearSearch(int V[], int n, int val)
{
    for (int i = 0; i < n; i++)
        if (V[i] == val)
            return 1;

    return 0;
}
