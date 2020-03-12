#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n, a, b, c, p;
    bool k;
    k = false;
    c = rand() % 10;
    a = rand() % 10;
    b = rand() % 10;
    n = c * 100 + a * 10 + b;
    cout << "Компьютер загадал трёхзначное число. Вы должны его отгадать. После очередного числа вам будет сообщено, сколько цифр угадано и сколько из них находятся на своих местах." << endl;
    while (k = false)
    cout << "Введите число" << endl;
    cin >> p;
    
    return 0;
}
