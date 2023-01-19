#include <iostream>

using namespace std;
//Khai báo các chữ số các hàng.
string arrHangDonVi[10]={"khong","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
string arrHangChuc[10]={"linh","muoi","hai muoi","ba muoi","bon muoi","nam muoi","sau muoi","bay muoi","tam muoi","chin muoi"};
string arrHangTram[10]={"khong tram","Mot tram","Hai tram","Ba tram","Bon tram","Nam tram","Sau tram","Bay tram","Tam tram","Chin tram"};
int hangDonVi, hangChuc, hangTram;
string strTemp = "";
int n;
//Khai Báo tên ba thủ tục
void DocMotChuSo(int n);
void DocHaiChuSo(int n);
void DocBaChuSo(int n);

int main(){
    cout << "Nhap n = "; cin >> n;
    system("cls"); // Xóa hết màn hình vừa nhập cho đẹp.
    if(n>=0 && n<10){
        DocMotChuSo(n);
    }else if(n>=10 && n<100){
        DocHaiChuSo(n);
    }else if(n>=100 && n<1000){
        DocBaChuSo(n);
    }else{
        cout << "Yeu cau so n < 1000.\n";
    }
    return 0;
}

//Xây dựng nội dung cho 3 thủ tục đọc số.
void DocMotChuSo(int n){
    strTemp = arrHangDonVi[n];
    strTemp[0] = strTemp[0]-32;
    cout << "n = " << n << "\n" << strTemp <<".\n";
}
void DocHaiChuSo(int n){
    hangChuc = n/10;
    hangDonVi = n - hangChuc*10;
    if(hangChuc == 1 && hangDonVi == 0) cout << "n = " << n << "\n Muoi.\n";
    if(hangChuc == 1 && hangDonVi == 1) cout << "n = " << n << " \n Muoi mot.\n";
    if(hangChuc == 1 && hangDonVi > 1){
        cout << "n = " << n << "\nMuoi " << arrHangDonVi[hangDonVi] << ".\n";
    }
    if(hangChuc > 1 && hangDonVi == 1){
        strTemp = arrHangChuc[hangChuc];
        strTemp[0] = strTemp[0]-32;
        cout << "n = " << n << "\n" << strTemp << " mo't.\n";
    }
    if(hangChuc > 1 && hangDonVi == 0){
        strTemp = arrHangChuc[hangChuc];
        strTemp[0] = strTemp[0]-32;
        cout << "n = " << n << "\n" << strTemp << ".\n";
    }
    if(hangChuc > 1 && hangDonVi > 1){
        strTemp = arrHangChuc[hangChuc];
        strTemp[0] = strTemp[0]-32;
        cout << "n = " << n << "\n" << strTemp << " " << arrHangDonVi[hangDonVi] << ".\n";
    }
}
void DocBaChuSo(int n){
    hangTram = n/100;
    hangChuc = (n-hangTram*100)/10;
    hangDonVi = n - hangTram*100 - hangChuc*10;
    if(n==100) cout << "n=100\n Mot tram.";
    else{
        cout << "n = " << n << endl;
        if(hangDonVi>0)
            cout << arrHangTram[hangTram] << " " << arrHangChuc[hangChuc] << " " << arrHangDonVi[hangDonVi] << ".\n";
        else
            cout << arrHangTram[hangTram] << " " << arrHangChuc[hangChuc] << ".\n";
    }
}
