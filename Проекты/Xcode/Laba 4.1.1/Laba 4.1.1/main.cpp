#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
int main() {
    int n, k, z, f;
    int l = 0;
    cout << "Введите размер матрицы" << endl;
    cin >> n >> k;
    int p[n][k];
    cout << "Заполните матрицу" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            cin >> p[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            cout << setw(4) << p[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            if (p[i][j] == 0){
                l++;
            }
        }
        if (l == k){
                if (i == 0){
                    for (int q = 1; q < n; q++){
                        for (int w = 0; w < k; w++){
                            cout << setw(4) << p[q][w];
                        }
                        cout << endl;
                    }
                } else {
                    for (int w = 0; w < k; w++){
                        z = p[0][w];
                        p[0][w] = p[i][w];
                        p[i][w] = z;
                    }
                    for (int q = 1; q < n; q++){
                        for (int w = 0; w < k; w++){
                            cout << setw(4) << p[q][w];
                        }
                        cout << endl;
                    }
                }
            
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
            if (j == 0){
                    for (int q = 0; q < n; q++){
                         for (int w = 1; w < k; w++){
                        cout << setw(4) << p[q][w];
            }
                    cout << endl;
    }
            }
}
        l = 0;
}
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            if (p[i][j] > 0){
                f = 2;
                break;
            }
                       }
        }
                cout << "Первая строка, где встречается первый положительный элемент = " << f  << endl;
    }
