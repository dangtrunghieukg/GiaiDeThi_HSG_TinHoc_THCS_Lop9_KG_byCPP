#include <iostream>
using namespace std;

string inputString;
int dem=0, tongSoLe=0, chuSo;
int main(){
    cout << "Nhap day so M: ";
    getline(cin, inputString);
    for(int i=0; i<inputString.length(); i++){
        chuSo = inputString[i]-48;
        if(chuSo%2 != 0){
            dem++;
            tongSoLe += chuSo;
        }
    }
    cout << "So cac chu so le trong day so " << inputString << " la " << dem << ", tong " <<tongSoLe << endl;
    return 0;
}
