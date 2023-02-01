#include <iostream>
using namespace std;

bool isNguyenTo(int N){
    bool flag = true;
    if(N<=1) return false;
    else if(N==2) return true;
    else {
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
    int M, N;
    cout << "Nhap so tu nhien N:"; cin >> N;
    cout << "Nhap so tu nhien M:"; cin >> M;
    string strUocNgToM = "";
    string strUocNgToN = "";
    for(int i=2; i<=M/2; i++){
        if(isNguyenTo(i) && M%i==0) strUocNgToM += to_string(i)+" ";
    }
    for(int i=2; i<=N/2; i++){
        if(isNguyenTo(i) && N%i==0) strUocNgToN += to_string(i)+" ";
    }
    if(strUocNgToM == strUocNgToN){
        cout << N << " va " << M << " la so nguyen to tuong duong.";
    }else{
        cout << N << " va " << M << " KHONG la so nguyen to tuong duong.";
    }
    return 0;
}







/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
