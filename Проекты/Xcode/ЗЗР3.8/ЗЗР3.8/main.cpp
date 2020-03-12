#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
void Add(int **a, int k)
{
        for (int i = 0; i < k; i++)
                for (int j = 0; j < k; j++)
                        a[i][j] = rand() % 100 + 1;
}

void Print(int **a, int k)
{
        for (int i = 0; i < k; i++)
        {
                for (int j = 0; j < k; j++)
                    printf("%d   ", a[i][j]);
                printf ("\n");
        }
}

int     main()
{
        int k;

        printf ("Введите размер квадратной матрицы ");
        scanf ("%d", &k);
        int **p = new int *[k];
        for (int i = 0; i < k; i++)
                p[i] = new int [k];
        Add(p, k);
        Print(p, k);
        for (int i = 0; i < k; i++)
                delete []p[i];
        delete []p;
        return 0;
}
