#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    string q;
    int a;
    ofstream god;
    god.open("myf1.txt");
    if (!god){
        cout << "Беда" << endl;
    } else{
        cout << "Введите кол-во строк" << endl;
        cin >> a;
        for (int i = 0; i < a; i++){
            cin >> q;
            god << q << endl;
        }
    }
    god.close();
    ifstream rapgod;
    rapgod.open("myf1.txt");
    if (!rapgod){
        cout << "Беда" << endl;
    } else {
        while (getline(rapgod, q)){
            int i = 0;
            while (q[i] == ' ' ){
                i++;
            }
            if (q[i] == '-'){
                cout << q << endl;
            }
        }
    }
}
