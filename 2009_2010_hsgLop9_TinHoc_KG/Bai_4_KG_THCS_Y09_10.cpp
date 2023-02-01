#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

// Ky thi chon HSG vong tinh lop 9 THCS - Nam hoc 2009-2010 Ky thi chon HSG vong tinh lop 9 THCS - Nam hoc 2009-2010
int main(){
    string chuChay;
    string chuoiSpace = "";
    cout << "Nhap chuoi can chay: ";
    getline(cin, chuChay);
    for(int i=0; i<chuChay.length(); i++){
        chuoiSpace += " ";
    }
    chuChay = chuChay + chuoiSpace;
    string strTemp = chuoiSpace;
    int dem = 0;
    while(!kbhit()){
        strTemp.erase(0,1);
        strTemp += chuChay[dem];
        cout << "\n \n " << strTemp;
        Sleep(100);
        system("cls");
        dem++;
        if(dem>=2*chuoiSpace.length()){
            strTemp = chuoiSpace;
            dem = 0;
        }
    }
	return 0;
}






/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
