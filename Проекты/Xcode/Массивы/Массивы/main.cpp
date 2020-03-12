#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
int main() {
    srand(time(0));
    int a, b, c;
    cout << "Введите размер 3 мерного пространства" << endl;
    cin >> a >> b >> c;
    int P[a][b][c];
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            for (int q = 0; q < c; q++){
                P[i][j][q] = rand() % 2;
            }
        }
    }
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            for (int q = 0; q < c; q++){
                cout << setw(4) << P[i][j][q];
            }
            cout << endl;
        }
        cout << endl;
    }
}
