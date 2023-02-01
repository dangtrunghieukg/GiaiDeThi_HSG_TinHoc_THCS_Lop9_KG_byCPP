#include <iostream>
using namespace std;

int X, gio, phut, giay;
int main(){
    cout << "Man hinh 1: "; cin >> X;
    while(X>2000000000){
        cout << "Khong thoa yeu cau. Nhap lai: "; cin >> X;
    }
    gio = X/3600;
    phut = (X-gio*3600)/60;
    giay = X - gio*3600 - 60*phut;
    cout << "Man hinh 2: ";
    if(gio>0) cout << gio << " gio: ";
    if(phut>0) cout << phut << " phut: ";
    if(giay>0) cout << giay << " giay";
    return 0;
}
