#include<iostream>
using namespace std;
int N() {
    int n;
    cout << "Введите натуральное число" << endl;
    cin >> n;
    int c = 0;
    for (int i = 0; i < n; i++){
        if (n % i == 0){
            c = c + 1;
        }
    }
    cout << " Кол-во делителей = " << c << endl;
    c = 0;
    return 0;
}
int main() {
    int s;
    cout << "Введите кол-во натуральных чисел" << endl;
    cin >> s;
    int P[s];
    for (int i = 0; i < s; i++){
        N();
    }
    return 0;
}
