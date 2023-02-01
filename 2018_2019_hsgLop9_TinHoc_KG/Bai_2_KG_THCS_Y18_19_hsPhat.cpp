#include <iostream>
#include <cmath>
using namespace std;

bool snt(int x );
bool ssnt(int n);
int N, dau, cuoi, tam, dem;

int main()
{
    cout << "Nhap N:"; cin >> N;
    dau=1*pow(10,N-1);
    cuoi=10*pow(10,N-1)-1;

    for(int i=dau;i<=cuoi;i++)
    {
        if (ssnt(i)==true)
        {
            cout << i << " ";
            dem++;
        }
    }
    cout << endl;
    cout << "Co tat ca " << dem << " so sieu so nguyen to co " << N << " chu so";
    return 0;
}
bool snt(int x )
{
bool co = true;
    if (x < 2) co= false;
    else if (x == 2) co=true;
    else
    {
        for (int i=2; i<=x/2; i++)
        {
            if (x%i == 0)
            {
                co= false;
                break;
            }
        }
    }
    return co;
}
bool ssnt(int n)
{
bool co=true;
    while (n!=0)
    {
        if(n!=0)
        {
            if (snt(n)!= true )
            {
                co=false;
                break;
            }
        }
        n=n/10;
    }
    return co;
}
