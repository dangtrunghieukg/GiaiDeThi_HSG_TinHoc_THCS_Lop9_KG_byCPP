#include <iostream>
using namespace std;

int A[1000];
int N, dem, maxx;
int main()
{
    cout << "Nhap N:"; cin >> N;

    for(int i=1;i<=N;i++)
    {
        cout << "Nhap phan tu thu " << i << ":"; cin >> A[i];
    }
    dem=0;
    for(int i=1;i<=N;i++)
    {
        if(A[i]==A[i+1])
        {
            dem++;
            if (maxx < dem ) maxx = dem;
        }
        else dem=0;
    }
    cout << "ket qua mat can bang:" << endl;
    for(int i=1;i<=N;i++)
    {
        if(A[i]==A[i+1])
        {
            dem++;
            if (maxx == dem )
            for (int j=i-dem+1;j<=i+1;j++)
            cout << A[j] << " ";
            cout << endl;
        }
        else dem=0;
    }

    return 0;
}
