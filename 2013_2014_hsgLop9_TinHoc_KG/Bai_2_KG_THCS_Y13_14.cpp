#include <iostream>
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
int N;

int main(){
    cout << "Nhap N="; cin >> N;
    int dem = N+1;
    while(!isPrime(dem)){
        dem++;
    }
    cout << "So nguyen to nho nhat lon hon " << N << " la: " << dem << endl;
    return 0;
}







/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
