#include <iostream>

using namespace std;
int dem20kg=0, dem10kg=0, dem5kg=0, dem1kg=0, X;
int main(){
    cout << "Nhap so kg gao X: "; cin >> X;
    while(X-20>=0){
        dem20kg++;
        if(X-20<0) break;
        X -= 20;
    }
    while(X-10>=0){
        dem10kg++;
        if(X-10<0) break;
        X -= 10;
    }
    while(X-5>=0){
        dem5kg++;
        if(X-5<0) break;
        X -= 5;
    }
    while(X-1>=0){
        dem1kg++;
        if(X-1<0) break;
        X -= 1;
    }
    cout << "So bao can de dong goi la: " << dem20kg+dem10kg+dem5kg+dem1kg << endl;
    if(dem20kg>0) cout << "Loai 20kg: " << dem20kg << endl;
    if(dem10kg>0) cout << "Loai 10kg: " << dem10kg << endl;
    if(dem5kg>0) cout << "Loai 5kg: " << dem5kg << endl;
    if(dem1kg>0) cout << "Loai 1kg: " << dem1kg << endl;
    return 0;
}
