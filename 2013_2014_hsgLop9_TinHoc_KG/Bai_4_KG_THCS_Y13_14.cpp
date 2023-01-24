#include <iostream>
using namespace std;

int n, X;
int arrBool[20] = {0};
int arrHoanVi[20];
int arrChuaTatCaHoanVi[999999]={0};
int demSoHoanVi = 0;
string strTemp = "";

void XuatHoanVi(){
    for(int i=1; i<=n; i++){
        strTemp += to_string(arrHoanVi[i]);
    }
    arrChuaTatCaHoanVi[demSoHoanVi] = stoi(strTemp);
    strTemp = "";
    demSoHoanVi++;
}
void Try(int j){
    for(int i=1; i<=n; i++){
        if(arrBool[i]==0){
            arrHoanVi[j] = i;
            arrBool[i] = 1;
            if(j==n){
                XuatHoanVi();
            }else{
                Try(j+1);
            }
            arrBool[i]=0;
        }
    }
}

int main(){
    cout << "Nhap so n="; cin >> n;
    cout << "X="; cin >> X;
    Try(1);
    bool flag = false;
    int viTriHoanVi;
    for(int i=0; i<demSoHoanVi; i++){
        if(arrChuaTatCaHoanVi[i]==X){
            viTriHoanVi = i;
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "Vi tri cua hoan vi " << X << " la: " << viTriHoanVi+1 << endl;
    }else{
        cout << "Hoan vi X = " << X << " khong tim thay !" << endl;
    }
    return 0;
}
