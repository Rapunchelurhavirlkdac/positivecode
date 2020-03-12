#include<iostream>
using namespace std;
int main(){
    int a, b, x;
    cout << "Введите: длины сторон a и b, и угол между ними" << endl;
    cin >> a >> b >> x;
    if (a == b and x == 90) {
        cout << "Это квадрат" << endl;
    } else if (a != b and x == 90){
        cout << "Это прямоугольник" << endl;
    } else if (a == b){
        cout << "Это РОМБ" << endl;
    } else {
        cout << "Это параллелограмм" << endl;
    }
}
