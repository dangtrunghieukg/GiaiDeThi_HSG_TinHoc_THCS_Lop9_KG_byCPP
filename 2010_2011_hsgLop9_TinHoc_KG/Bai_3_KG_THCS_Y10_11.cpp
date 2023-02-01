#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> vtA;
int n, soNhap, soChen;

int main(){
    cout << "Nhap vao so n = "; cin >> n;
    for(int i=0; i<n; i++){
        cout << "So thu " << i+1 << ": ";
        cin >> soNhap;
        vtA.push_back(soNhap);//Thêm phần tử vào vector
    }
    cout << "\nNhap so can chen: "; cin >> soChen;
    cout << "\nDay so ban dau: ";
    for(int x:vtA) cout << x << " ";
    sort(vtA.begin(), vtA.end());//Sắp xếp vector không giảm
    cout << "\nDay so da sap xep tang dan: ";
    for(int x:vtA) cout << x << " ";
    cout<<"\nDay so da chen them: ";
    int viTriChen;
    int tong = soChen;
    int daChenOk = false;
    for(int i=0; i<vtA.size(); i++){
        if(vtA[i]>soChen && daChenOk==false){
            viTriChen = i+1;
            cout << soChen << " " << vtA[i] << " ";
            daChenOk = true;
        }else{
            cout << vtA[i] << " ";
        }
        if(soChen%2 == 0 ){
            if(vtA[i]%2==0){
                tong += vtA[i];
            }
        }else{
            if(vtA[i]%2 != 0){
                tong += vtA[i];
            }
        }
    }
    cout << "\nVi tri moi chen: " << viTriChen << endl;
    cout << "Tong cac so ";
    if(soChen%2 == 0)
        cout << "chan: ";
    else
        cout << "le: ";
    cout << tong << endl;
    return 0;
}






/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
