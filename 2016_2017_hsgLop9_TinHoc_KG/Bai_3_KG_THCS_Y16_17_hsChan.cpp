#include <iostream>
using namespace std;

int arrA[100];
int main(){
    int N;
    cout <<"Nhap N: "; cin >>N;
    cout <<"Nhap day: "<<endl;
    for(int i=0; i<N; i++){
        cout<<"A["<<i+1<<"]"<<"="; cin>>arrA[i];
    }

    int temp;
    for(int i=0; i<N; i++){
        for(int j=i; j<N;j++){
            if(arrA[i]<arrA[j]){
                temp=arrA[i];
                arrA[i]=arrA[j];
                arrA[j]=temp;
            }
        }
    }
    cout<<"Day sau khi xoa cac phan tu trung nhau: ";
    for(int i=0; i<N; i++){
        if(arrA[i]!=arrA[i+1]){
            cout <<arrA[i]<<" ";
        }
    }

return 0;
}

