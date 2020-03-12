//Я...я понеслась душа в рай//
#include <iostream>

using namespace std;

void Add(int &N)
{
    cout << "Введите натуральное число " << endl;
    do
        cin >> N;
    while (N <= 0);
}

int NeDeluc(int N)
{
    int i = 0;
    
    while (N != 0)
    {
        if ((N % 10) % 2 == 1)
            i++;
        N = N / 10;
    }
    return i;
}

void Rembo(int *a, int n)
{
    for (; n >= 0 ; n--)
    cout << a[n];
}

void Pr(int N)
{
    int i = 0, k = N;
    
    while (N / 10 != 0)
    {
        i++;
        N = N / 10;
    }
    int a[i + 1];
    
    for (int j = 0; j <= i; j++)
    {
        a[j] = k % 10;
        if ((a[j]) % 2 != 0)
            a[j] = 1;
        k = k / 10;
    }
    Rembo(a, i);
}

void Print(int N)
{
    cout << N;
}
int main()
{
    int N;
    
    Add(N);
    Print(NeDeluc(N));
    cout << endl;
    Pr(N);
    cout << endl;
}
