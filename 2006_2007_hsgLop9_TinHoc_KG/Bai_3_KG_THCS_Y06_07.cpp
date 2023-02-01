#include <iostream>
#include <vector>
using namespace std;

int k = 4;
int soTriBo=0;
vector<int> vtTribo = {0, 1, 1, 2};
int N, tong = 0;

int main(){
    cout << "Nhap N="; cin >> N;
    while(soTriBo<=N){
        soTriBo = vtTribo[k-1]+vtTribo[k-2]+vtTribo[k-3];
        if(soTriBo<=N){
            vtTribo.push_back(soTriBo);
        }else{
            break;
        }
        k++;
    }
    int M = N;
    string strKetQua = to_string(N)+"=";
    for(int i=vtTribo.size()-1; i>=1; i--){
        if(M>=vtTribo[i]){
            strKetQua = strKetQua + to_string(vtTribo[i]) + "+";
            tong += vtTribo[i];
            M -= vtTribo[i];
        }
        if(tong == N) break;
    }
    strKetQua.erase(strKetQua.length()-1,1);
    cout << strKetQua;
    return 0;
}
