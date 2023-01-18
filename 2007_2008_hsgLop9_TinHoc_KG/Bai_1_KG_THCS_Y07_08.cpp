#include <iostream>

using namespace std;
int n, k, X, Y;
int arrBool[20] = {0};
int arrHoanVi[20];
int arrChuaTatCaHoanVi[999999]={0};
int demSoHoanVi = 0;
string strTemp = "";
void XuatHoanVi(){
    for(int i= 1; i<=n; i++){
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
    cout << "Nhap n = "; cin >> n;
    cout << "Nhap X = "; cin >> X;
    cout << "Nhap k = "; cin >> k;
    Try(1);
    bool flag = false;
    for(int i=0; i<demSoHoanVi; i++){
        if(X<arrChuaTatCaHoanVi[i] && arrChuaTatCaHoanVi[i]%k==0){
            Y = arrChuaTatCaHoanVi[i];
            flag = true;
            break;
        }
    }
    if(flag==true){
        cout << "Hoan vi Y = " << Y;
    }else{
        cout << "Khong ton tai hoan vi Y.";
    }
    return 0;
}
