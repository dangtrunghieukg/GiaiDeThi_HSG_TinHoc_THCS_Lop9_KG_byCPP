#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Nha so N = "; cin >> N;
    int arrMatrix[99][99];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(i%2==0)
            {
                arrMatrix[i][j]=1-j%2;;
            }
            else
            {
                arrMatrix[i][j] = 0 - j%2;
            }
        }
    }
    int sum=0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cout << arrMatrix[i][j] << "  ";
            if(arrMatrix[i][j]>0) cout << " ";
            sum += arrMatrix[i][j];
        }
        cout << endl;
    }
    cout << "Voi N = " << N << endl;
    cout << "Tong cac so cua ma tran = " << sum << endl;
    return 0;
}







/*
Tác giả: Thầy Đặng Trung Hiếu - Giáo viên dạy Toán trường THCS & THPT Long Thạnh - Giồng Riềng - Kiên Giang - Phone: 0939239628
Donate: Paypal:dangtrunghieuspt@gmail.com ; Sacombank: Dang Trung Hieu - TK: 070126079549
*/
