#include <iostream>
using namespace std;

string strInput;
int arrHoanViN[100];
int arrMaHoa[100];
int n;
int main(){
    cout << "Nhap xau: "; getline(cin, strInput);
    cout << "Nhap n:"; cin >> n;
    if(strInput.length()%n !=0 ){
        for(int i = 0; i<strInput.length() % n; i++){
            strInput = strInput+" ";
        }
    }
    strInput = " " + strInput;
    for(int i=1; i<=n; i++){
        cout << "Ki tu thu " << i << " thay bang ki tu vi tri:"; cin >> arrMaHoa[i];
    }
    string ketQuaMaHoa = "";
    string strTemp = "";
    for(int i=1; i<=strInput.length()-1; i++){
        strTemp += strInput[i];
        if(i%n==0){
            strTemp = " "+strTemp;
            string strTempCopy = strTemp;
            for(int j=1; j<=n; j++){
                strTemp[j] = strTempCopy[arrMaHoa[j]];
            }
            strTemp.erase(0,1);
            ketQuaMaHoa += strTemp;
            strTemp = "";
        }
    }
    cout << "\n\nXau sau khi ma hoa: " << ketQuaMaHoa << "." << endl;
    return 0;
}






/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
