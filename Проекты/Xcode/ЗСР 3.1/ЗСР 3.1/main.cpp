#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;
void Add(int **a, int k, int c)
{
    for (int i = 0; i < k; i++)
        for (int j = 0; j < c; j++)
            a[i][j] = rand() % 90 + 11;
}
void Print(int **a, int k, int c)
{
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}
int Schet(int **a, int k, int c)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
        for (int j = 0; j < c; j++)
            sum = sum + pow(a[i][j], 2);
    return sum;
}
int main()
{
    srand(time(0));
    int k, c;

    cout << "Введите размер двумерного массива" << endl;
    cin >> k >> c;
    int **p = new int *[k];
    for (int i = 0; i < k; i++)
        p[i] = new int[c];
    Add(p, k, c);
    Print(p, k, c);
    cout << "Сумма квадратов двумерного массива = " << Schet(p, k, c) << "." << endl;
    for (int i = 0; i < k; i++)
        delete []p[i];
    delete []p; 
    return 0;
}
