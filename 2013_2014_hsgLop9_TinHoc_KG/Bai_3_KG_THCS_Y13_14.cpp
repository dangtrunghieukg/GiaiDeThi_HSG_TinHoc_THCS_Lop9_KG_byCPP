#include <iostream>
#define maxPhanTu 10000001
using namespace std;

int arrA[maxPhanTu];
int arrB[maxPhanTu];
int n, m;
int main(){
    cout << "Nhap so phan tu mang A, n="; cin >> n;
    for(int i=0; i<n; i++){
        cout << "A["<<i+1<<"]="; cin >> arrA[i];
    }
    cout << "Nhap so phan tu mang con B, m="; cin >> m;
    while(m>n){
        cout << "Khong hop le. Dieu kien m<=n. Nhap lai m="; cin >> m;
    }
    int tong = 0, tongMax = 0, viTriMax = 0;
    for(int i=0; i<=n-m; i++){
        for(int j=i; j<i+m; j++){
            tong += arrA[j];
        }
        if(tongMax<tong){
            tongMax = tong;
            viTriMax = i;
        }
        tong = 0;
    }
    cout << "Mang con B co tong phan tu lon nhat la: ";
    for(int i=viTriMax; i<viTriMax+m; i++){
        cout << arrA[i] << " " ;
    }
    cout << "\nTong = " << tongMax << endl;
    return 0;
}
