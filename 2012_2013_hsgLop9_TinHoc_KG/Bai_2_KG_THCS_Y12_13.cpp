#include<iostream>
#define M 1000
using namespace std;

unsigned long long arrFibo[M];
unsigned long long Fn, Fn1 = 1, Fn2 = 1;
unsigned long long tong=0;
int N;
string strTemp = "";

int main(){
    arrFibo[0]=1; arrFibo[1]=1;
    cout << "Nhap N = "; cin >> N;
    for(int i=2; i<M; i++){
        Fn = Fn1 + Fn2;
        Fn1 = Fn2;
        Fn2 = Fn;
        arrFibo[i] = Fn;
    }
    int tempN = N;
    for(int i = M-1; i>=0; i--){
        if(arrFibo[i]<=tempN){
            tempN = tempN - arrFibo[i];
            strTemp = strTemp + "+" + to_string(arrFibo[i]);
        }
    }
    strTemp.erase(0,1);
    cout << N << "=" << strTemp << endl;
    cout << arrFibo[999];
    return 0;
}






/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
