#include<iostream>
#include<cmath>
#include<iomanip>
//Hàm setprecision(n) chỉ định hiển thị đến n chữ số thập phân.
//Bài này không dùng using namespace std, thì trước đó có tiền tố std::
float a, b, c, delta;

void GiaiPtBacI(float a, float b){
    if(a != 0){
        std::cout << "Phuong trinh: " << a <<"X + " << b << " = 0"<< std::endl;
        std::cout << "Phuong trinh co nghiem X = " << std::setprecision(2) << -b/a;
    }else if(a==0 && b!= 0){
        std::cout << "Phuong trinh VO nghiem.";
    }else{
        std::cout << "Phuong trinh VO SO nghiem.";
    }
}
int main(){
    std::cout << "Nhap he so \na = "; std::cin >> a;
    std::cout << "b = "; std::cin >> b;
    std::cout << "c = "; std::cin >> c;
    if(a==0){
        GiaiPtBacI(b, c);
    }else{
        std::cout << "Phuong trinh: " << a <<"X^2 + " << b << "X + " << c << " = 0 " << std::endl;
        delta = b*b - 4*a*c;
        if(delta>0){
            std::cout << "Phuong trinh co 2 nghiem: \n";
            std::cout << "x1 = " << std::setprecision(2) << (-b+std::sqrt(delta))/(2*a) <<std::endl;
            std::cout << "x2 = " << std::setprecision(2) << (-b-std::sqrt(delta))/(2*a) <<std::endl;
        }else if(delta == 0){
            std::cout << "Phuong trinh co nghiem kep X1 = X2 = " << std::setprecision(2) << -b/(2*a);
        }else{
            std::cout << "Phuong trinh VO nghiem.";
        }
    }
    return 0;
}






/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
