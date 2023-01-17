#include <iostream>

using namespace std;
int arrTam[5] = {5, 5, 6, 8, 15};

//Xây dựng hàm kiểm tra số nguyên tố
bool isPrime(int N){
    bool flag = true;
    if (N<2) return false;
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
//Xây dựng hàm kiểm tra số nguyên tố sinh đôi
bool isNguyenToSinhDoi(int a, int b){
    if (isPrime(a) == true && isPrime(b) == true && abs(a-b)==2)
        return true;
    else
        return false;
}

int main(){
    string strKetQua = "";
    int n;
    cout << "Nhap n: "; cin >> n;
    //Tạo mảng động có n phần tử.
    int *arrA = new int(n);
    for(int i = 0; i<n; i++){
        cout << "A[" << i+1<< "]=" ; cin >> arrA[i];
    }
    int dem = 0;
    for(int i=0; i<n; i++){
        for(int j = i; j<n; j++){
            if(isNguyenToSinhDoi(arrA[i],arrA[j])){
                strKetQua += "("+to_string(arrA[j])+" "+to_string(arrA[i])+") ";
                dem++;
            }
        }
    }
    if(dem>0){
        cout << "Co " << dem << " cap so sinh doi" << endl;
        cout << strKetQua;
    } else {
        cout << "Ket qua: khong co cap so nao";
    }
    return 0;
}
