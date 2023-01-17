#include <iostream>

using namespace std;
int GiaiThua(int N){
    if (N<0) return -1;
    else if (N==0) return 1;
    else {
        int ketQua=1;
        for(int i=1; i<=N; i++){
            ketQua *= i;
        }
        return ketQua;
    }
}
int ToHopCkn(int k, int n){
    int ketQua=1;
    for(int i=1; i<=k; i++){
        ketQua *= (n-(i-1));
    }
    ketQua = ketQua / GiaiThua(k);
    return ketQua;
}
//Thuật toán liệt kê Chỉnh hợp
#define maxN  20
int x[maxN]={0};
void printArray(int a[], int n){
	for (int i = 1; i <= n; i++){
		cout << a[i] <<" ";
	}
	cout <<"\n";
}
void LietKeToHop(int h, int k, int n){
	for (int i = x[h-1] + 1; i <= n - (k-h); i++){
		x[h] = i;
		if (h == k) printArray(x, k);
		else {
			LietKeToHop(h+1, k, n);
		}
	}
}

int main(){
    int n, k;
    cout << "Nhap n: "; cin >> n;
    cout << "Nhap k: "; cin >> k;
    cout << "Tong so cach chon: " << ToHopCkn(k, n) << endl;
	LietKeToHop(1, k, n);
    return 0;
}
