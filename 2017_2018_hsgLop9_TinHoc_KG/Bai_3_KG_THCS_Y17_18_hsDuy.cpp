
#include <iostream>
using namespace std;
int N,tam=0;
string chuoi="", chuoi2="";
int main(){
    cout << "Nhap N: "; cin >> N;
    tam=N;
    while(N/2!=0){
        chuoi=chuoi+to_string(N%2);
        N=N/2;
        if(N==1){
            chuoi=chuoi+to_string(1);
        }
    }
    N=tam;
    while(N>=16){
        if(N%16<10){
            //cout << endl  << N << endl;
            chuoi2=chuoi2+to_string(N%16);
        }else{
            //cout << endl << N << endl;
           chuoi2=chuoi2 + char((N%16)+55);
        }
        N/=16;
    }if(N>9 && N<16){
       chuoi2=chuoi2+ char((N%16)+55);
    }else if(N>-1 && N<10){
        chuoi2=chuoi2 + to_string(N);
    }
    cout << "Bieu dien he co so 2 cua " << tam << ": ";
    for(int i=chuoi.length()-1; i>=0; i--){
        cout << chuoi[i] << "";
    }
    cout << endl << "Bieu dien he co so 16 cua " << tam << ": ";
     for(int i=chuoi2.length()-1; i>=0; i--){
        cout << chuoi2[i] << "";

    }
    return 0;
}
