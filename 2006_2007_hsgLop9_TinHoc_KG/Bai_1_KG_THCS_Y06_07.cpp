#include <iostream>
using namespace std;

int N, doCaoMax, Xn=0, Yn=0;
int main(){
    cout << "Nhap N = "; cin >> N;
    doCaoMax = N/2; // division integer
    cout << "Tong so buoc di: " << N << endl;
    cout << "Do cao cuc dai: " << doCaoMax << endl;
    cout << "Toa do cac dinh: ";
    for(int i=1; i<=N; i++){
        if(i <= doCaoMax){
            Xn++;
            Yn++;
            cout << "(" << Xn << "," << Yn << ");";
        }else{
            Xn++;
            if(Yn>0) Yn--;
            cout << "(" << Xn << "," << Yn << ")";
            (i < N) ? cout <<";" : cout <<""; // short if
        }
    }
    return 0;
}
