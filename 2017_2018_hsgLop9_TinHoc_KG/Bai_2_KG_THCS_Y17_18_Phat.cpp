#include <iostream>
using namespace std;
int A[100];
int N, tam, vitri;
int main()
{
    cout << "Nhap N="; cin >> N;

    for (int i=1; i<=N; i++)
    {
        cout << "Nhap A[" << i << "]=";
        cin >> A[i];
    }

    for (int i=1; i<=N; i++)
    {
        for (int j=1; j<=N; j++)
        {
            if(A[i] >A[j])
            {
                tam=A[i];
                A[i]=A[j];
                A[j]=tam;
            }
        }
    }

    for (int i=1; i<=N; i++)
    {
        if (A[i] >0 && A[i+1] <0) vitri=i;
    }

    for (int i=1; i <=vitri; i++)
        for (int j=1; j<=vitri; j++)
        {
            if(A[i] < A[j])
            {
                tam=A[i];
                A[i]=A[j];
                A[j]=tam;
            }
        }

    cout << "Day so theo yeu cau la: ";
    for (int i=1; i<=N; i++)
        cout << A[i] << " ";

    return 0;
}
