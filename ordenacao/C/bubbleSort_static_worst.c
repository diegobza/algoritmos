#include <stdio.h>

int main()
{
    int V[] = {3, -2, 0, -1, 6};
    int n = 5;
    int i, j, temp;

    printf("Original: ");
    for (i = 0; i < n; i++)
        printf("%3d", V[i]);

    for (i = 0; i < n; i++)
        for (j = 0; j < n - 1; j++)
            if (V[j] > V[j + 1]) {
                temp = V[j];
                V[j] = V[j + 1];
                V[j + 1] = temp;
            }

    printf("\nOrdenado: ");
    for (i = 0; i < n; i++)
        printf("%3d", V[i]);

    return 0;
}
