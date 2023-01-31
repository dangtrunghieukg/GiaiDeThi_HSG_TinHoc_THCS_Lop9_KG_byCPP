#include <iostream>
using namespace std;
string sdt;
int dem,j,tam;
string s;
int main()
{
cout << "Nhap xau:"; getline(cin,s);

for (int i=0;i<s.length();i++)
{
    if(char16_t(s[i]) > 47 && char16_t(s[i])<58)
    {
        dem++;
        sdt+=s[i];
    }

}
if (dem == 10 ) cout << "Dung-"<< sdt;
if (dem >10)
{
    cout << "Thua-";
    for (int i=0;i<=10;i++)
        cout <<sdt[i];
}
if (dem <10)
{
    cout << "Thieu-" << sdt;
    for (int i=dem;i<=10;i++)
        cout << "0";
}
return 0;
}
