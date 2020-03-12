#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void Add(int **a, int k)
{
    for (int i = 0; i < k; i++)
        for (int j = 0; j < k; j++)
            a[i][j] = rand() % 50 + 1;
}

void Print(int **a, int k)
{
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
}

int Sum(int **a, int k)
{
    int sum = 0;
    
    for (int i = 0; i < k; i++)
        sum = sum + a[i][i];
    return (sum);
}

int main()
{
    int k;
    
    cout << "Введите разсер квадратной матрицы\t= ";
    cin >> k;
    int **p = new int *[k];
    for (int i = 0; i < k; i++)
        p[i] = new int [k];
    Add(p, k);
    Print(p, k);
    cout << "Сумма главной диагонали\t= " << Sum(p, k) << endl;
    return (0);
}
