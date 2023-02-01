#include <iostream>
using namespace std;

int arrTanSo[10];
int dem=0, chuSo;
string strIn;

int main(){
    cout << "Nhap chuoi: ";
    getline(cin, strIn);
    for(int i=0; i<strIn.length(); i++){
        if(strIn[i]>='0' && strIn[i]<='9'){
            chuSo = strIn[i] - 48;
            arrTanSo[chuSo]++;
            dem++;
        }
    }
    cout << "Trong chuoi co " << dem << " so, so luong tung loai: " << endl;
    for(int i=0; i<10; i++){
        if(arrTanSo[i]>0){
            cout << "So "<<i<<": "<<arrTanSo[i] << " lan." << endl;
        }
    }
    return 0;
}
