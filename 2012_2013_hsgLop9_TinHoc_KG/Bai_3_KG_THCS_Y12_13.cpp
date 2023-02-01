#include <iostream>
#define M 1000001
using namespace std;

int arrTanSo[M];
bool arrDaXuat[M];
int arrA[M];
int N;

int main(){
    cout << "Nhap N = "; cin >> N;
    for(int i=0; i<N; i++){
        cout <<"A"<<i+1<<"="; cin >> arrA[i];
    }
    for(int i=0; i<N; i++){
        arrTanSo[arrA[i]]++;
    }
    int soLanMax=0;
    int viTriMax;
    for(int i=0; i<M; i++){
        if(soLanMax<arrTanSo[i]){
            soLanMax = arrTanSo[i];
            viTriMax = i;
        }
    }
    string strXuat = "";
    for(int i=0; i<N; i++){
        if(arrDaXuat[arrA[i]]==0){
            strXuat =strXuat + to_string(arrA[i])+", ";
            arrDaXuat[arrA[i]]=1;
        }
    }
    strXuat.erase(strXuat.length()-2,2);
    cout << "Cac so xuat hien trong mang la: " << strXuat << endl;
    cout << "So xuat hien nhieu lan nhat la " << viTriMax << " ( " << soLanMax << " lan)";
    return 0;
}
