#include <iostream>
using namespace std;
float a, b, c, p, cosA, cosB, cosC, s2;

int main(){
    cout << "Nhap vao ba so a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    //Giải theo công thức Hê-rong và Hệ quả định lý Cosin
    p = (a+b+c)/2.0;
    s2 = p*(p-a)*(p-b)*(p-c);
    cosA = (b*b+c*c-a*c)/(2*b*c);
    cosB = (a*a+c*c-b*b)/(2*a*c);
    cosC = (b*b+a*a-c*c)/(2*b*a);
    if(s2<=0){
        cout << "a="<<a<<", b="<<b<<", c="<<c<<" khong phai la chieu dai 3 canh cua tam giac.";
    }else{
        if(cosA*cosB*cosC==0){
            cout << "a="<<a<<", b="<<b<<", c="<<c<<" la chieu dai 3 canh tam giac vuong.";
        }else if(cosA*cosB*cosC>0){
            cout << "a="<<a<<", b="<<b<<", c="<<c<<" la 3 canh cua tam giac nhon.";
        }else{
            cout << "a="<<a<<", b="<<b<<", c="<<c<<" la 3 canh cua tam giac tu.";
        }
    }
    return 0;
}
