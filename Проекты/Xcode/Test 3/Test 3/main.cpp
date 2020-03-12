#include<iostream>
using namespace std;
int N(){
    int n;
    cout << "Введите натуральное число" << endl;
    cin >> n;

    int c = 0;
    for (int i = 1; i < n + 1; i++){
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
        P[i] = N(&c);
    }
    for (int i = 0; i < s; i ++){
        cout << "[" << i + 1 << "]" << " = " << P[i] << endl;
    }
    return 0;
}
