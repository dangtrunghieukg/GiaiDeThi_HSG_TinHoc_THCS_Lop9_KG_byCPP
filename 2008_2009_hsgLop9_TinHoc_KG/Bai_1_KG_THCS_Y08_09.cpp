#include <iostream>
using namespace std;

int n, k;
int arrWaitTime[2000000];

int main(){
    cout << " Nhap n = "; cin >> n;
    for(int i=0; i<n; i++){
        cout << "t"<< i+1 << " = "; cin >> arrWaitTime[i];
    }
    cout << "Nhap k = "; cin >> k;
    int timeTong = 0;
    int timeKhachk = 0;
    float timeTb;
    int timeMin = arrWaitTime[0], timeMax = arrWaitTime[0];
    for(int i=0; i<n; i++){
        timeTong += arrWaitTime[i];
        if(i+1<k) timeKhachk += arrWaitTime[i];
        if(timeMin > arrWaitTime[i]) timeMin = arrWaitTime[i];
        if(timeMax < arrWaitTime[i]) timeMax = arrWaitTime[i];

    }
    cout << "Thoi gian nguoi thu " << k << " phai cho den luot minh la " << timeKhachk << endl;
    cout << "Thoi gian trung binh de phuc vu mot khach " << ((float)timeTong/n) << endl;
    cout << "Thoi gian khach duoc phuc vu nhanh nhat la " << timeMin << " (nguoi thu ";
    for(int i=0; i<n; i++) if(timeMin == arrWaitTime[i]) cout << i+1 <<", ";
    cout << ")" << endl;
    cout << "Thoi gian khach duoc phuc vu cham nhat la " << timeMax << " (nguoi thu ";
    for(int i=0; i<n; i++) if(timeMax == arrWaitTime[i]) cout << i+1 << ", ";
    cout << ")" << endl;
    return 0;
}
