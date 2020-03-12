#include <iostream>
#include <cstdlib>

using namespace std;

void Add(int *a, int k)
{
    for (int i = 0; i < k; i++)
        a[i] = rand() % 100;
}

void Print(int *a, int k)
{
    for (int i = 0; i < k; i++)
        cout << "[" << i + 1 << "]" << " = " << a[i] << endl;
}

int Max(int *a, int k, int &min, int &c, int &q)
{
    int max = -10;
    
    for (int i = 0; i < k; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            c = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            q = i;
        }
    }
    return max;
}
int main()
{
    srand(time(0));
    
    int k, min;
    int c, q;
    
    min = 100;
    cout << "Введите размер массива" << endl;
    cin >> k;
    int a[k];
    Add(a, k);
    Print(a, k);
    cout << endl;
    cout << "Максимальное значение = " << Max(a, k, min, c, q);
    cout << "\tего позиция " << c + 1 << endl;
    cout << "\nМинимальное значение = " << min << "\tего позиция " << q + 1 << endl;
    return 0;
}
