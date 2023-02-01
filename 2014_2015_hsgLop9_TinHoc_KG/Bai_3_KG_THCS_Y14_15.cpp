#include <iostream>
#include <vector>
using namespace std;

vector<int> vtA;
int n, soNhap, viTriXoa;
int main(){
    cout <<"Nhap so phan tu cua mang so nguyen A: "; cin >> n;
    for(int i=0; i<n; i++){
        cout << "A[" << i+1 << "]=";
        cin >> soNhap;
        vtA.push_back(soNhap);
    }
    cout << "Nhap vi tri can xoa: "; cin >> viTriXoa;
    cout << "Mang A: ";
    for(int x:vtA) cout << x << " "; cout << endl;
    cout << "Mang A sau khi xoa phan tu vi tri 4: ";
    for(int i=0; i<vtA.size(); i++){
        if(i != (viTriXoa-1)) cout << vtA[i] << " ";
    }
    cout << endl;
    return 0;
}







/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
