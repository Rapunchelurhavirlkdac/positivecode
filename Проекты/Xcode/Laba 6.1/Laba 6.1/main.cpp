#include <iostream>
#include <string>
#include "math.h"
using namespace std;
int main()
{
    const int N = 100;
    const int  M = 100;
    int a[N], b[M], i, fl, max, ind1, j,k3,max2,ind2;
    float k, sr1,sr2 ,sum1,sum2, k1,k2;
    cout << "vvedite kol-vo elementov";
    cin >> k;
    float sum = 0.0;
    k2 = 0; k3 = 0; max = 0; sum2 = 0; max2 = -100; ind1 = 0; ind2 = 0;
    
    for (i = 0; i < k; i++) {
        cin >> a[i];
        sum = sum+a[i];
        if (a[i] > max) (max = a[i]) && (ind1 = i);

    }
    cout << sum << endl;
    k1 = 0.0;
    sum1 = 0;
    sr1 = sum / k;
    for (i = 0; i < k; i++) {
        for (j = 2; j < 10; j++) {
            if ((a[i] % 2 == 0) && (a[i] % j == 0) && (a[i] != j)) (b[k3] = a[i]) && (k3++) && (sum1 = sum1 + b[k3]);
        }
    }
    for (i = 0; i < k3; i++) {
        sum2 = sum2 + b[i];
        k2++;
        if (b[i] > max2) (max2 = b[i]) && (ind2 = i);
    }
    sr2 = sum2 / k2;
    for (i = 0; i < k3; i++) {
        cout << b[i];
    }
    cout << sr1 << "-sr arifm do "<<endl;
    cout << sr2 << "-sr arifm posle"<<endl;
    cout << ind1 << "-pos max1" << endl;
    cout << ind2 << "-pos max 2";
}
