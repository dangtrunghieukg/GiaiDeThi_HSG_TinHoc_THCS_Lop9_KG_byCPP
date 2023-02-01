#include <iostream>
#define maxPhanTu 10000001
using namespace std;

int arrTanSo[maxPhanTu];
int arrA[maxPhanTu];
int n, soMax=0, dem=0, soLanMax=0, giaTriLanMax;
int main(){
    cout << "Nhap vao so phan tu cua mang A: "; cin >> n;
    for(int i=0; i<n; i++){
        cout << "A[" << i+1 << "]="; cin >> arrA[i];
        if(soMax<arrA[i]) soMax = arrA[i];
    }
    for(int i=0; i<n; i++){
        arrTanSo[arrA[i]]++;
    }
    for(int i=0; i<=soMax; i++){
        if(arrTanSo[i]>0){
            dem++;
        }
        if(soLanMax<arrTanSo[i]) soLanMax = arrTanSo[i];
    }
    cout << "So phan tu co gia tri khac nhau cua mang la: " << dem << endl;
    for(int i=0; i<=soMax; i++){
        if(arrTanSo[i]==soLanMax){
            giaTriLanMax = i;
            break;
        }
    }
    cout << "Phan tu xuat hien nhieu lan nhat co gia tri la: " << giaTriLanMax << endl;
    return 0;
}
