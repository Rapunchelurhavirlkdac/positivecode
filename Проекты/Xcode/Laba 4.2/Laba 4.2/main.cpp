#include<iostream>
using namespace std;

    struct Noone{
        int x;
        int y;
    };

int main() {
    int n;
    cout << "Введите кол-во координат" << endl;
    cin >> n;
    Noone got;
    for (int i = 0; i < n; i++){
        cout << i + 1 << ")" << endl;
        cout << "Введите x" << endl;
        cin >> got.x;
        cout << "Введите y" << endl;
        cin >> got.y;
        if (got.x > 0 and got.y > 0){
            cout << "В 1 четверти" << endl;
        }
        else if ((got.x > 0 and got.y == 0) or (got.x == 0 and got.y > 0) or (got.x < 0 and got.y == 0) or (got.x == 0 and got.y < 0)){
            cout << "Ошибка" << endl;
        }
        else if (got.x < 0 and got.y > 0){
            cout << "Во 2 четверти" << endl;
        }
        else if (got.x < 0 and got.y < 0){
            cout << "В 3 четверти" << endl;
        }
        else {
            cout << "В 4 четверти" << endl;
        }
    }
    
}
