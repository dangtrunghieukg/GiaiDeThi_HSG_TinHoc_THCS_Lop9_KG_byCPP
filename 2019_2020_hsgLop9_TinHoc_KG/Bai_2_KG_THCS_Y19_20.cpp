#include <iostream>

using namespace std;

int main(){
    int N;
    cout << "Nhap N:"; cin >> N;
    int *arrA = new int(N);
    for(int i=0; i<N; i++){
        cout << "A["<<i+1<<"]="; cin >> arrA[i];
    }
    cout << "Mang A vua nhap: ";
    for(int i=0; i<N; i++) cout << arrA[i] << " ";
    cout << endl;

    int tongA=0, tongAChan=0, tichALe=1;
    for(int i=0; i<N; i++){
        tongA += arrA[i];
        if(i%2!=0) tongAChan += arrA[i];
        if(i%2==0) tichALe *= arrA[i];
    }
    int tempNum;
    for(int i=0; i<N; i++){
        for(int j=i; j<N; j++){
            if(arrA[i]>arrA[j]){
                tempNum = arrA[i];
                arrA[i] = arrA[j];
                arrA[j] = tempNum;
            }
        }
    }
    cout << "Tong gia tri mang A: "<< tongA<<endl;
    cout << "Tong gia tri phan tu o vi tri chan la: "<<tongAChan << endl;
    cout << "Tich gia tri phan tu o vi tri le la: " << tichALe << endl;
    cout << "Mang A sau khi sap xep: "; for(int i=0; i<N; i++) cout << arrA[i] << " "; cout << endl;
    cout << "Cac phan tu lon hon 10: ";
    for(int i=0; i<N; i++){
        if(arrA[i]>10) cout << arrA[i] << " ";
    }
    return 0;
}
