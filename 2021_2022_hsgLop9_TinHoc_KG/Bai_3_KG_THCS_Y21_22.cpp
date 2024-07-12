#include <iostream>
using namespace std;
string strInThuong = "abcdefghijklmnopkrstuvwxyz";
int arrChuoiInThuong[26];
int main() {
    string strInput = "Nam Hoc 2021-2022";
    for (char i : strInput) {
        for (int j = 0; j < 26; j++) {
            if (i == strInThuong[j]) {
                arrChuoiInThuong[j]++;
                break;
            }
        }
    }
    int demKiTuThuong = 0;
    for (int i : arrChuoiInThuong) {
        if (i > 0) {
            demKiTuThuong++;
        }
    }
    cout << "Trong chuoi co: " << demKiTuThuong << " ki tu in thuong." << endl;
    cout << "So luong nhu sau:\n";
    for (int i = 0; i < 26; i++) {
        if (arrChuoiInThuong[i] > 0) {
            cout << "Ky tu " << strInThuong[i] << " : " << arrChuoiInThuong[i] << endl;
        }
    }
    return 0;
}