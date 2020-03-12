#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
void Massiv(int *q, int n){
    //заполняем массив//
    for (int i = 0; i < n; i++){
        q[i] = rand () % 200 - 100;
        cout << "[" << i + 1 << "]" << " = " << q[i] << endl;
    }
}
int main() {
    int n, l, c;
    c = 1;
    l = 0;
    cout << "Введите кол-во элементов массива" << endl;
    cin >> n;
    int *p = new int [n];
    Massiv(p, n);
    int *w = new int [c];
    cout << endl;
    for (int i = n - 1; i >= 0; i--){
        cout << "[" << i + 1 << "]" << " = " << p[i] << endl;
    }
}
