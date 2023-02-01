#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int N){
    if(N<=1) return false;
    else if(N==2) return true;
    else{
        bool flag = true;
        for(int i=2; i*i<=N; i++){
            if(N%i==0){
                flag = false;
                break;
            }
        }
        return flag;
    }
}

int main(){
    int dem = 1, demNgTo=0;
    int soNhap = 0;
    int tong=0, tongNguyenTo=0;
    vector <int> vtA;
    while(soNhap != 1){
        cout << "Nhap so "<<dem << ": "; cin >> soNhap;
        if(soNhap != 1){
            vtA.push_back(soNhap);
            dem++;
        }
    }
    for(int x:vtA){
        tong += x;
        if(isPrime(x)){
            tongNguyenTo += x;
            demNgTo++;
        }
    }
    cout << "Tong cac so trong day la: " << tong << endl;
    cout << "Co "<<demNgTo<<" so nguyen to trong day, tong cua chung la: "<<tongNguyenTo;
    return 0;
}







/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
