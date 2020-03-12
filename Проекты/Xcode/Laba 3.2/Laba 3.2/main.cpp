#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int x, x1, y, y1, r, r1, z;
    cout << "Введите параметры 1 окружности :" << endl;
    cout << "Координату x;" << endl;
    cout << "Координату y;" << endl;
    cout << "Радиус." << endl;
    cin >> x >> y >> r;
    cout << "Введите параметры 2 окружности :" << endl;
    cout << "Координату x;" << endl;
    cout << "Координату y;" << endl;
    cout << "Радиус." << endl;
    cin >> x1 >> y1 >> r1;
    z = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
    if ((fabs(x) - fabs(x1) == 0) && (fabs(y) - fabs(y1) == 0) && r - r1 == 0){
        if (x != x1){
        cout << "Кол-во точек = 1" << endl;
        } else if (x == x1){
            cout << "Кол-во точек пересечения = Бесконечность" << endl;
        }
        else if (z > r - r1){
            cout << "Кол-во точек пересечения = 2" << endl;
        }
        else if (z > r + r1){
            cout << "Кол-во точек пересечения = 0" << endl;
        }
        else {
            cout << "Окружности внутри друг друга" << endl;
        }
    }
    return 0;
}
