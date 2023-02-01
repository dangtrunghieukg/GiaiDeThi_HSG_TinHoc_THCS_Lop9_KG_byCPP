#include <iostream>
#include <iomanip>
using namespace std;

double a, r1,r2, tongTien;
int t, t1, t2;


int main(){
    r1 = 2.0/100.0; //2%/3thang
    r2 = 0.1/100.0; //0.1%/1thang
    cout << "Nhap so tien muon gui ban dau: "; cin >> a;
    cout << "Nhap so thang muon gui: "; cin >> t;
    t1 = t/3;
    t2 = t - t1*3;
    tongTien = a;
    for(int i=0; i<t1; i++){
        tongTien = tongTien*(1+r1);
    }
    for(int i=0; i<t2; i++){
        tongTien = tongTien*(1+r2);
    }
    cout << "So tien gui sau " << t << " thang la: " << setprecision(2) << fixed << tongTien << endl;
    return 0;
}


