//Bài 3 Đề thi HSG THCS Kiên Giang Năm 2008-2009
//Bài này giải theo phong cách C cho vui !
//Tư đề bài ta có hệ phương trinh bậc nhất 2 ẩn
//x+y=n và 4x+3y=k
//Ta dùng phương pháp định thức Crame giải cho vui

#include <stdio.h> // Thư viện vào ra chuẩn, nếu dùng C++ thì #include<iostream>

int n, k, xeTaxi, xeLam;
int D, Dx, Dy; // Khai báo ba định thức của hệ phương trình
//x+y=n
//4x+3y=k

int main(){
    printf("Nhap n = "); // Tương đương với cout << "Nhap n = "
    scanf("%d", &n); // Gần tương đương với cin >> n;
    printf("Nhap k = ");
    scanf("%d", &k); // Kí hiệu %d ám chỉ nhập số nguyên
    D = 1*3-4*1;
    Dx = 3*n-1*k;
    Dy = 1*k-4*n;
    xeTaxi = Dx/D;
    xeLam = Dy/D;
    if(xeTaxi>0 && xeLam>0 && (4*xeTaxi+3*xeLam==k)){
        printf("Co %d xe taxi va %d xe lam trong ben.", xeTaxi, xeLam);
    }else{
        printf("Khong tim duoc so xe Taxi va xe Lam thoa yeu cau!");
    }
    return 0;
}
