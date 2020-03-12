#include<iostream>
#include<math.h>
using namespace std;
class Figura{
public:
    Figura(int a, int b, int c, int d){
        this -> a = a;
        this -> b = b;
        this -> c = c;
        this -> d = d;
    }
    int a;
    int b;
    int c;
    int d;
};
class Kvadret : public Figura{
public:
    Kvadret(int a, int b, int c, int d) : Figura (a, b, c, d)
    {}
    void set(int a, int b, int c, int d){
        if (a == b == c == d){
            cout << "Это квадрат" << endl;
            s = a * a;
            p = a * 4;
        } else if (a == c & b == d){
            cout << "Это прямоугольник" << endl;
            s = a * b;
            p = (a + b) * 2;
        }
        r = sqrt(a * a + b * b);
    }
    int s;
    int p;
    double r;
};
int main(){
    int  N, a, b, c, d, min, max, l, m;
    min = 1000;
    max = -1000;
    cout << "Введите кол-во фигур" << endl;
    cin >> N;
    for (int q = 0; q < N; q++){
        cout << "Введите параметры" << endl;
        cin >> a >> b >> c >> d;
        Figura god(a, b, c, d);
        Kvadret rap(a, b, c, d);
        rap.set(a, b, c, d);
        if (max < rap.s){
            max = rap.s;
            l = q;
        }
        if (min > rap.s) {
            min = rap.s;
            m = q;
        }
        cout << "Периметр " << rap.p << endl;
        cout << "Площадь " << rap.s << endl;
        cout << "Диагональ " << rap.r << endl;
        cout << "Сторона AB " << rap.a << endl;
        cout << "Сторона BC " << rap.b << endl;
        cout << "Сторона CD " << rap.c << endl;
        cout << "Сторона AD " << rap.d << endl;
    }
    cout << "Фигура с максимальной площадью " << max << " под номером " << l + 1 << endl;
    cout << "Фигура с минимальной площадью " << min << " под номером " << m + 1 << endl;
}
