#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int a;
    cout << "Здесь вершится судьба" << endl;
    a = rand() % 2;
    if (a == 1){
        cout << "едь ленивая задница" << endl;
    } else {
        cout << "+ нога " << endl;
    }
    return 0;
}
