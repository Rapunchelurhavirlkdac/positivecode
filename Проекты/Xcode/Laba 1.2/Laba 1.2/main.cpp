#include<iostream>
#include<cstdlib>
using namespace std;
void Mila(int k) {
    int Kot[k];
    int l = 0;
    for (int i = 0; i < k; i++){
        Kot[i] = rand() % 10;
              cout << "[" << i + 1 << "]" << " = " << Kot[i] << endl;
        if (Kot[i] == 5){
            l++;
        }
    }
    cout  << "Кол-во n чисел = " << l << endl;
}
int main() {
    int n;
    cout << "Введите кол-во натуральных чисел" << endl;
    cin >> n;
    Mila(n);
    return 0;
}
