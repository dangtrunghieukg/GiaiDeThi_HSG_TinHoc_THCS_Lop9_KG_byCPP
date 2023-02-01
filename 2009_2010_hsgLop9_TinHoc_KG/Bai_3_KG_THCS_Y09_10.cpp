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
int a, b, BCNN;
int main(){
	cout << "Nhap so a: "; cin >> a;
	cout << "Nhap so b: "; cin >> b;
	cout << "Boi chung nho nhat cua " << a << " va " << b << " la: " << a/UCLN(a, b) * b;
    return 0;
}
