#include<iostream>
#include<vector>
using namespace std;
vector<int> vtA;
int main(){
    int dem = 0;
    int soNhap = 0;
    bool soHopLe = true;
    while(soNhap != -1){
        cout << "Nhap so thu " << dem + 1 << ": "; cin >> soNhap;
        if(soNhap == -1) break;
        if(dem>0){
            for(int i=0; i<vtA.size(); i++){
                if(vtA[i]>soNhap){
                    soHopLe = false;
                    break;
                }
            }
            while(!soHopLe){
                cout << "       So " << soNhap << " khong hop le. Nhap lai!\n";
                cout << "Nhap so thu " << dem + 1 << ": "; cin >> soNhap;
                if(soNhap == -1) break;
                soHopLe = true;
                for(int i=0; i<vtA.size(); i++){
                    if(vtA[i]>soNhap){
                        soHopLe = false;
                        break;
                    }
                }
            }
            if(soNhap != -1){
                vtA.push_back(soNhap);
                dem++;
            }
        }else{
            vtA.push_back(soNhap);
            dem++;
        }
    }
    int tong = 0;
    cout << "Cac so vua nhap:\n";
    for(int i=0; i<vtA.size(); i++){
        tong += vtA[i];
        cout << vtA[i]<< " ";
    }
    cout << "\nTong "<< vtA.size() <<" so = " << tong;
    return 0;
}
