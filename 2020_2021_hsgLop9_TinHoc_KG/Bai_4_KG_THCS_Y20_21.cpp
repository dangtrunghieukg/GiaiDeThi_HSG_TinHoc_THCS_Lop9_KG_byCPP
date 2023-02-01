#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Nha tuoi bo x = "; cin >> x;
    cout << "Nhap tuoi con y = "; cin >> y;
    while (x-y<=20){
        cout << "Yeu cau x - y > 20, nhap lai:" << endl;
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
    }
    int tuoiBo = x;
    int tuoiCon = y;
    if (x==2*y){
        cout << "Hien nay tuoi con bang 1/2 tuoi bo.";
    }
    else{
        int demNguoc = 0;
        int demXuoi = 0;
        bool demNguocOk = false;
        while(tuoiCon>0){
            tuoiBo -= 1;
            tuoiCon -= 1;
            demNguoc++;
            if (tuoiBo==2*tuoiCon){
                demNguocOk = true;
                break;
            }
        }
        if (demNguocOk==true){
            cout <<demNguoc<<" nam truoc, tuoi con bang 1/2 tuoi bo";
        }else{
            tuoiBo = x;
            tuoiCon = y;
            while (tuoiBo != 2*tuoiCon){
                tuoiBo += 1;
                tuoiCon += 1;
                demXuoi++;
            }
            cout << "Sau "<<demXuoi<<" nua thi tuoi con bang 1/2 tuoi bo";
        }
    }
    return 0;
}






/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
