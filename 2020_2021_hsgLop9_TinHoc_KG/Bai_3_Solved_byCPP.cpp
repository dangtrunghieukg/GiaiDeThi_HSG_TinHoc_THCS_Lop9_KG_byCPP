#include <iostream>

using namespace std;

bool isSoHoanHao(int n){
    if (n<=0) return false;
    else {
        int tongUoc = 0;
        for(int i=n-1; i>=1; i--){
            if(n%i==0) tongUoc += i;
        }
        if (tongUoc == n) return true;
        else return false;
    }
}

int main(){
    int n;
    cout << "Nhap N: "; cin >> n;
     //Tạo mảng động có n phần tử
    int *arrMang = new int(n);
    for(int i=0; i<n; i++){
        cout << "A["<<i+1<<"]=";
        cin >> arrMang[i];
    }
    int x;
    cout << "Nhap x: "; cin >> x;
    int demX = 0, demSoHoanHao =0;
    int phanTuMin = 0, phanTuMax = 0;
    int tichPhanTu = 1;
    string phanTuChanViTriLe = "";

    for(int i=0; i<n; i++){
        if (x==arrMang[i]) demX++;
        if ((arrMang[i]%2==0) && ((i+1)%2 !=0)) phanTuChanViTriLe += to_string(arrMang[i]) + " ";
        if (isSoHoanHao(arrMang[i])==true){
            demSoHoanHao++;
        }
        if (arrMang[i]<=phanTuMin) phanTuMin = arrMang[i];
        if (arrMang[i]>=phanTuMax) phanTuMax = arrMang[i];
    }
    cout << "So phan tu cua x la: " << demX << endl;
    cout << "Phan tu co gia tri chan o vi tri le:" << phanTuChanViTriLe << endl;
    cout << "Phan tu la so hoan hao: " << demSoHoanHao << endl;

    int viTriMin = 0, viTriMax = 0;
    for(int i=0; i<n; i++){
        if (arrMang[i]==phanTuMin){
            viTriMin = i;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if (arrMang[i]==phanTuMax){
            viTriMax = i;
            break;
        }
    }
    int temp;
    if (viTriMin>viTriMax){
        temp = viTriMin;
        viTriMin = viTriMax;
        viTriMax = temp;
    }
    for(int i = viTriMin; i<=viTriMax; i++){
        tichPhanTu *= arrMang[i];
    }
    cout << "Tich cac phan tu: " << tichPhanTu << endl;
    return 0;
}
