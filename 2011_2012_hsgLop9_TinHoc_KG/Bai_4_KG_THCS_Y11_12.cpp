#include <iostream>
using namespace std;

int aTraLoi, bTraLoi=-1, dem=0;
int soA, soM, soB;

int main(){
    soA = 0;
    soB = 101;
    soM = (soA+soB)/2;
    aTraLoi = soM;
    bool timOk = false;
    while(bTraLoi !=1 && dem<7){
        cout << "[" << dem+1 << "] Nguoi A (may tinh) tra loi: " << aTraLoi << "\t Nguoi B (nguoi choi) tra loi: "; cin >> bTraLoi;
        dem++;
        if(bTraLoi==0){
            soB = soM;
            soM = (soA+soB)/2;
            aTraLoi = soM;
        }else if(bTraLoi == 9){
            soA=soM;
            soM = (soM+soB)/2;
            aTraLoi = soM;
        }else if(bTraLoi == 1){
            timOk = true;
        }
        if(aTraLoi<1) break;
    }
    if(timOk){
        cout << "So ban nghi la: "<< aTraLoi;
    }else{
        cout << "That bai !";
    }
    return 0;
}






/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
