#include <iostream>
#include <cmath>
using namespace std;

bool ktraSo(int N);
int N;
string chuoi="";

int main(){
    cout << "Nhap N: "; cin >> N;
    if(ktraSo(N)==true){
        cout << "Ket qua: " << N << " la so nguyen to.";
    }else{
        int i=2;
        int dem=0;
        int mangSo[100]={0};
        cout << "Ket Qua: ";
        while(N>1){
            if(N%i==0){
                N=N/i;
                mangSo[dem++]=i;
            }else{
                i++;
            }
        }
        if(dem==0){
            mangSo[dem++]=N;
        }
        for(int i=0; i<dem; i++){
            if(i<dem-1){
                cout << mangSo[i] << ".";
            }else{
                cout << mangSo[i];
            }
        }
    }
    return 0;
}
bool ktraSo(int N){
    bool kq=true;
    if(N<2){
        return false;
    }else if(N==2){
        return true;
    }else{
        for(int i=2; i<=sqrt(N); i++){
            if(N%i==0){
                kq=false;
                break;
            }
        }
        return kq;
    }
}
