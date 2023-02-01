#include <iostream>
#include <cmath>
using namespace std;

int a, b, c, tongLapPhuong, abc;
int main(){
    cout << "Nhap so a: "; cin >> a;
    while(a==0){
        cout << "Nhap so lai so a (khac 0): "; cin >> a;
    }
    cout << "Nhap so b: "; cin >> b;
    cout << "Nhap so c: "; cin >> c;
    tongLapPhuong = pow(a,3)+pow(b,3)+pow(c,3);
    abc = a*100+b*10+c;
    if(abc == tongLapPhuong){
        cout << "So " << a << b << c << "=" << a << "^3+" << b <<  "^3+" << c <<  "^3" << endl;
    }else {
        cout << "So " << a << b << c << " khong bieu dien duoc abc=" << a << "^3+" << b <<  "^3+" << c <<  "^3" << endl;
    }
    return 0;
}
