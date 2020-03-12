#include<iostream>

using namespace std;
int main () {
    int n, mx, t, r = 0;
    mx = -3;
    cout << "Введите кол-во элементов массива" << endl;
    cin >> n;
    int N[n];
    for (int i = 0; i < n; i++){
        N[i] = rand() % 100;
        cout << "[" << i + 1 << "]" << " = " << N[i] << endl;
    }
    for (int i = 0; i < n; i++){
        if (mx < N[i]) {
            mx = N[i];
            r = i;
        }
    }
    cout << N[r] << r << endl;
    cout << endl;
    for (int i = r; i < n; i++){
        for (int j = r + 1; j < n; j++){
            if (N[j] > N[j + 1]){
                t = N[j + 1];
                N[j + 1] = N[j];
                N[j] = t;
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << "[" << i + 1 << "]" << " = " << N[i] << endl;
    }
    return 0;
}
