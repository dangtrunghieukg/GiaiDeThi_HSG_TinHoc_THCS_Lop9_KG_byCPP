#include <iostream>
using namespace std;

int soKwh, tienTrongDinhMuc, tienVuotDinhMuc;
int giaDinhMuc = 550;
int giaVuotDM101 = 1110;
int giaVuotDM151 = 1470;
int giaVuotDM201 = 1600;
int giaVuotDM301 = 1720;
int giaVuotDM401 = 1780;

int main(){
    cout << "Nhap so Kwh tieu thu: "; cin >> soKwh;
    if(soKwh<101){
        tienTrongDinhMuc = soKwh*giaDinhMuc;
        tienVuotDinhMuc = 0;
    }else if(soKwh>=101 && soKwh<151){
        tienTrongDinhMuc = 100*giaDinhMuc;
        tienVuotDinhMuc = (soKwh - 100)*giaVuotDM101;
    }else if(soKwh>=151 && soKwh<201){
        tienTrongDinhMuc = 100*giaDinhMuc;
        tienVuotDinhMuc =  50*giaVuotDM101 + (soKwh - 150)*giaVuotDM151;
    }else if(soKwh>=201 && soKwh<301){
        tienTrongDinhMuc = 100*giaDinhMuc;
        tienVuotDinhMuc = 50*giaVuotDM101 + 50*giaVuotDM151 + (soKwh - 200)*giaVuotDM201;
    }else if(soKwh>=301 && soKwh<401){
        tienTrongDinhMuc = 100*giaDinhMuc;
        tienVuotDinhMuc = 50*giaVuotDM101 + 50*giaVuotDM151 + 100*giaVuotDM201 + (soKwh - 300)*giaVuotDM301;
    }else if(soKwh>=401){
        tienTrongDinhMuc = 100*giaDinhMuc;
        tienVuotDinhMuc = 50*giaVuotDM101 + 50*giaVuotDM151 + 100*giaVuotDM201 + 100*giaVuotDM301+(soKwh - 400)*giaVuotDM401;
    }
    cout << "Tien phai tra phan su dung trong dinh muc: " << tienTrongDinhMuc << endl;
    cout << "Tien phai tra phan su dung VUOT dinh muc: " << tienVuotDinhMuc << endl;
    cout << "Tong so tien phai tra: " << tienTrongDinhMuc + tienVuotDinhMuc << endl;
    return 0;
}
