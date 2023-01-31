#include <iostream>
using namespace std;
char mangA[26];
int mangB[]={};
int mangC[]={};
int N=5;
int M=0, tam=0, dem=0, dem2=0, dem3=0, temp=0;
string chuoi="", chuoi2="";
int main(){
    int i=65;
    while(i<91){
        mangA[dem]=char(i);
        dem++;
        i++;
    }
    i--;
    cout << "Nhap chuoi can ma hoa: ";  cin >> chuoi;
    cout << "Chuoi ma hoa: ";
    for(int i=0; i<chuoi.length(); i++){
        temp=((chuoi[i]-65)+N)%26;
        mangB[dem2]=temp;
        dem2++;
    }
    for(int i=0; i<dem2; i++){
        cout << mangA[mangB[i]] << "";
    }
    cout << endl << "Nhap chuoi can giai ma: "; cin >> chuoi2;
    N=26-N;
    temp=0;
    for(int i=0; i<chuoi2.length(); i++){
        temp=((chuoi2[i]-65)+N)%26;
        mangC[dem3]=temp;
        dem3++;
    }
    cout << "Chuoi giai ma: ";
    for(int i=0; i<dem3; i++){
        cout << mangA[mangC[i]] << "";
    }
    return 0;
}
