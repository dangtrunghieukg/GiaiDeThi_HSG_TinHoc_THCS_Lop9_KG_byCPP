#include<iostream>
using namespace std;

int N, tong=0;
string strTong="";
bool phanTichOk = false;

int main(){
    cout << "Nhap vao so nguyen N = "; cin >> N;
    for(int i=1; i<N; i++){
        for(int j=i; j<N; j++){
            tong += j;
            strTong = strTong + to_string(j)+"+";
            if(tong == N){
                strTong.erase(strTong.length()-1,01);
                cout <<tong<< "="<< strTong << endl;
                tong = 0;
                strTong = "";
                phanTichOk = true;
                break;
            }else if(tong>N){
                tong = 0;
                strTong = "";
                break;
            }
        }
    }
    if(!phanTichOk) cout <<"N="<<N<< " khong the phan tich.";
    return 0;
}






/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
