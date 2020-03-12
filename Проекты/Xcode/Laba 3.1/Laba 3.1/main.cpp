#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double a, x;
    cout << "Введите альфа" << endl;
    cin >> a;
    if (a == 45){
        cout << "1) x = 1" << endl;
    } else {
    a = a * M_PI / 180;
    x = sin(4 * a) / (1 + cos(4 * a));
    x = x * cos(2 * a) / (1 + cos(2 * a));
    cout << "1) x = " << x << endl;
    cout << endl;
    }
    if (a == 45){
        cout << "1) x = 1" << endl;
    } else {
    x = 1 / (tan(3 * M_PI / 2 - a));
    cout << "2) x = " << x << endl;
}
}
