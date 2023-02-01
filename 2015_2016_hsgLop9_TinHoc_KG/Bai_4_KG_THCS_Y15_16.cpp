#include <iostream>
using namespace std;

string strNhap;
int demTu=0, demKiTu=0, demKiTuMax=0;
void ChuanHoaChuoi(string &s){
    while(s[0]==32) s.erase(0,1);
    while(s[s.length()-1]==32) s.erase(s.length()-1,1);
    for(int i=0; i<s.length()-1; i++){
        while(s[i]==32 && s[i+1]==32) s.erase(i,1);
    }
}
int main(){
    cout << "Nhap chuoi: ";
    getline(cin, strNhap);
    ChuanHoaChuoi(strNhap);
    strNhap += " ";
    for(int i=0; i<strNhap.length(); i++){
        demKiTu++;
        if(strNhap[i]==32){
            demTu++;
            if(demKiTuMax<demKiTu) demKiTuMax = demKiTu;
            demKiTu = 0;
        }
    }
    cout << "So luong cac tu trong chuoi: " << demTu << endl;
    cout << "Tu dai nhat: ";
    string strTemp = "";
    for(int i=0; i<strNhap.length(); i++){
        demKiTu++;
        if(strNhap[i] != 32) strTemp += strNhap[i];
        if(strNhap[i]==32){
            if(demKiTu == demKiTuMax){
                cout << strTemp << endl;
            }
            strTemp = "";
            demKiTu = 0;
        }
    }
    return 0;
}






/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
