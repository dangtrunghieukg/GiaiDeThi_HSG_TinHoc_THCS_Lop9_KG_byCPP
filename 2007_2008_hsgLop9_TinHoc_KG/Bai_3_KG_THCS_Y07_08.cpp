#include <iostream>
using namespace std;
bool isPrime(int N){
    bool flag = true;
    if(N<=1) return false;
    else if (N==2) return true;
    else{
        for(int i=2; i*i<=N; i++){
            if(N%i==0){
                flag = false;
                break;
            }
        }
        return flag;
    }
}
int main(){
    int M, N;
    cout << "Nhap M = "; cin >> M;
    cout << "Nhap N = "; cin >> N;
    string strUocM = "", strUocN = "";
    for(int i=2; i<=M; i++){
        if(M%i==0 && isPrime(i)){
            strUocM += to_string(i);
        }
    }
    for(int i=2; i<=N; i++){
        if(N%i==0 && isPrime(i)){
            strUocN += to_string(i);
        }
    }
    if(strUocM == strUocN){
        cout << M << " va " << N << " la so nguyen to tuong duong.\n";
    }else{
        cout << M << " va " << N << " KHONG la so nguyen to tuong duong.\n";
    }
    return 0;
}
