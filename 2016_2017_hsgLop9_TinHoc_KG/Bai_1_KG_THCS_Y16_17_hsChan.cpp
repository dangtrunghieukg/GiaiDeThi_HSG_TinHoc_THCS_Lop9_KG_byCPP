#include <iostream>
#include <cmath>
using namespace std;

bool isHoanHao(int n, string &phanTich)
{
    int tong =0;
    bool Ketqua;
    for ( int i=1; i<=(n/2); i++)
    {
        if(n%i==0)
        {
            tong +=i;
            phanTich=phanTich+to_string(i)+"+";
        }
    }
    if( tong ==n)
        Ketqua=true;
    else
        Ketqua=false;
    return Ketqua;
}
int n;
int main()
{
    cout << "Nhap so nguyen duong N: "; cin>> n;
    string PhanTich="";
    if(isHoanHao(n, PhanTich)==true){
        cout<<"So vua nhap la so hoan hao"<<endl;
        cout<<"(Giai thich:"<<n<<" la so hoan hao vi "<<n<<"="<<PhanTich.erase(PhanTich.length()-1, 1)<<")"<<endl;
    }else{
        cout<<"So vua nhap KHONG la so hoan hao";
    }

    return  0;
}
