#include <iostream>
#include <iomanip>
#include <cstdlib>

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
            cout << setw(4) << a[i][j];
        cout << endl;
    }
}
void T(int **a, int k, int c)
{
    int t, d = 1;
    for (int i = 0; i < k; i++)
    {
        for (int j = d; j < c; j++)
        {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
        d++;
    }
}
int main()
{
    int k, c;
    
    cout << "Введите разсер матрицы\t";
    cin >> k >> c;
    int **p = new int *[k];
    for (int i = 0; i < k; i++)
        p[i] = new int [c];
    Add(p, k, c);
    Print(p, k, c);
    T(p, k, c);
    cout << endl; 
    Print(p, k, c);
    for (int i = 0; i < k; i++)
        delete []p[i];
    delete []p;
    return 0;
}
