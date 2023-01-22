#include<iostream>
using namespace std;
//Hàm xóa khoảng trắng bên trái
string LeftTrim(string s){
    while(s[0]==' '){
        s.erase(0,1);
    }
    return s;
}
//Hàm xóa khoảng trắng bên phải
string RightTrim(string s){
    while(s[s.length()-1]==' '){
        s.erase(s.length()-1,1);
    }
    return s;
}
//Hàm xóa khoảng trống giữa
string MidTrim(string s){
    for(int i=0; i<s.length(); i++){
        while(s[i]==' ' && s[i+1]==' '){
            s.erase(i,1);
        }
    }
    return s;
}
//Hàm kiểm tra chữ số
bool ChuSoOk(char c){
    if(c>='0' && c<='9'){
        return true;
    }else{
        return false;
    }
}

string strInput = "  trUOnG   TRUNg    hoC      co So     le       qUY   DOn   2021-2021   ";

int main(){
    cout << "Nhap chuoi van ban can chuan hoa: ";
    getline(cin, strInput);
    strInput = LeftTrim(strInput);
    strInput = RightTrim(strInput);
    strInput = MidTrim(strInput);
    for(int i=0; i<strInput.length(); i++){
        if(strInput[i] != ' ' && strInput[i]>='A' && strInput[i] <= 'Z'){
            strInput[i] = strInput[i]+32;
        }
    }
    strInput[0] -= 32;
    for(int i=0; i<strInput.length(); i++){
        if(strInput[i]==' ' && ChuSoOk(strInput[i+1])==false){
            strInput[i+1] = strInput[i+1] - 32;
        }
    }
    cout << strInput << "\n";
    return 0;
}
