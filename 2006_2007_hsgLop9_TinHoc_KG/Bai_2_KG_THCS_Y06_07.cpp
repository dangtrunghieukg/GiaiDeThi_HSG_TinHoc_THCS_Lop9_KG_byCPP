#include <iostream>
using namespace std;

int k, dem = 0;
int indexK;
string strDem = "0";
int main(){
    cout << "Nhap so k = "; cin >> k;
    indexK = k;
    while (strDem.length()<=indexK){
        dem++;
        strDem += to_string(dem);
        if(strDem.length()>255 && strDem.length()<=indexK){
            strDem.erase(0,255);
            indexK -= 255;
        }
    }
    cout << "Chu so thu " << k << " cua day vo han 012345678910... la " << strDem[indexK-1] << endl;
    return 0;
}






/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
