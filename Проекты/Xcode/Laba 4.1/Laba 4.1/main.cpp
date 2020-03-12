#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int n, k;
    int l = 0;
    cout << "Введиет размер матрицы" << endl;
    cin >> n >> k;
    int ** p = new int *[n];
    for (int i = 0; i < n; i++){
        p[i] = new int [k];
    }
    cout << "Введите числа" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            cin >> p[i][j];
            if (p[i][j] == 0){
                l++;
            }
        }
        if (l == k){
            delete p[i];
        }
        l = 0;
    }
    for (int j = 0; j < k; j++){
        for (int i = 0; i < n; i++){
            if (p[i][j] == 0){
            l++;
        }
    }
        if (l == n){
                   delete p[j];
               }
               l = 0;
}
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            cout << setw(4) << p[i][j];
        }
        cout << endl;
    }
}

