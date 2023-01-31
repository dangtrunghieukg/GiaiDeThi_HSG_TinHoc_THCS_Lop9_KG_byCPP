#include <iostream>
#include <cmath>
int arrNgTo1[2000]={0};
int arrNgTo2[1000]={0};
using namespace std;
bool ktrSoNgTo(int x);
int main(){
    int K=2;
    cout<<"Nhap K: "; cin >>K;
    int dem=0;
    int i=0;
    while(dem<2000){
        if(ktrSoNgTo(i)==true){
            arrNgTo1[dem]=i;
            dem++;
        }
        i++;
    }
    string tam="";
    dem=0;
   for(int i=0; i<2000; i=i+2){
    tam=to_string(arrNgTo1[i])+to_string(arrNgTo1[i+1]);
    arrNgTo2[dem]=stoi(tam);
    tam="";
    dem++;
   }
   dem=0;
   for(int i=0; i<10900; i++){
        if(ktrSoNgTo(arrNgTo2[i])==true) dem++;
        if(ktrSoNgTo(arrNgTo2[i])==true && dem==K){
            cout<<"So nguyen to thu "<<K<<" la:"<<arrNgTo2[i]<<endl;
            break;
        }
   }
return 0;
}
bool ktrSoNgTo(int x){
    int n=x;
    bool ngtoFlag=true;
    if (n<=1)
    {
        ngtoFlag=false;
    }
    else if (n==2)
    {
        ngtoFlag=true;
    }
    else if (n>=3)
    {
        for(int i=2; i<=sqrt(n); i++)
        {
            if (n%i==0)
            {
                ngtoFlag = false;
                break;
            }
        }
    }
    return ngtoFlag;
}

