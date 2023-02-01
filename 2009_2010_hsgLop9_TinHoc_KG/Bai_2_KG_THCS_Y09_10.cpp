#include <iostream>
using namespace std;

int UCLN(int a, int b){
	int soLon, soBe, ketQua;
	if(a>b){
		soLon = a;
		soBe = b;
	}else{
		soLon = b;
		soBe = a;
	}
	for(int i=soBe; i>=1; i--){
		if(soLon%i==0 && soBe%i==0){
			ketQua = i;
			break;
		}
	}
	return ketQua;
}
int tuSo, mauSo;
int main(){
	cout << "Nhap tu so: "; cin >> tuSo;
	cout << "Nhap mau so: "; cin >> mauSo;
	cout << "Phan so toi gian la: " << tuSo/UCLN(tuSo, mauSo) << "/" << mauSo/UCLN(tuSo, mauSo);
    return 0;
}
