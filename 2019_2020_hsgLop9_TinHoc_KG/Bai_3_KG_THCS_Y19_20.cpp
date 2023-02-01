#include <iostream>
using namespace std;

//Từ ví dụ ta thấy tổng theo hàng = n^2
//Tổng theo cột bằng 2*n

int arrAn[999];
int arrBn[999];
int N;
int main(){
    cout << "Nhap n: "; cin >> N;
    if(N%2==0){
        int tongTheoHang = N*N;
        int tongTheoCot = 2*N;
        //Tạo phần tử cho 2 mảng
        for(int i=0; i<=2*N; i++){
            arrAn[i]=i;
            arrBn[i]=tongTheoCot - arrAn[i];
        }
        //In ra 2 mảng lại để kiểm tra
        /*
        for(int i=0; i<=2*N; i++){
            cout << arrAn[i] << " ";
        }
        cout << endl;
        for(int i=0; i<=2*N; i++){
            cout << arrBn[i] << " ";
        }
        cout << endl;
        */

        //Bắt đầu kiểm tra
        int temp = tongTheoHang;
        int tongTemp = 0;
        string strTempA = "";
        string strTempB = "";
        int dem = 0;
        for(int j=1; j<=2*N; j++){
            for(int i=j; i<=2*N; i++){
                if(temp-arrBn[i]>=0){
                    //cout << arrBn[i] << "+";
                    strTempB = strTempB+to_string(arrBn[i]) + "  ";
                    strTempA = strTempA+to_string(arrAn[i]) + "  ";
                    tongTemp += arrBn[i];
                    temp = temp - arrBn[i];
                    dem++;
                }
            }
            temp = tongTheoHang;
            if(tongTemp == tongTheoHang && dem >= N){
                cout << "Hai hang so ky ao: \n";
                cout << strTempA << endl;
                cout << strTempB << endl;
                dem = 0;
                break;
            }else if(tongTemp == tongTheoHang) dem = 0;
            strTempA = "";
            strTempB = "";
            tongTemp = 0;
        }
    }else{
        cout << "Khong the tim thay hai hang so ky ao.\n";
    }
    return 0;
}
