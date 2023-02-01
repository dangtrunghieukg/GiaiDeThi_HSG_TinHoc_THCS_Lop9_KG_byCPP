#include <iostream>
using namespace std;

string strInput;
void XoaTrai(string &s){
    while(s[0]==' '){
        s.erase(0,1);
    }
}
void XoaPhai(string &s){
    while(s[s.length()-1]==32){
        s.erase(s.length()-1,1);
    }
}
string XoaGiua(string s){
    for(int i=0; i<s.length()-1; i++){
        while(s[i]==32 && s[i+1]==' '){
            s.erase(i,1);
        }
    }
    return s;
}
int main(){
    cout << "Nhap chuoi S: ";
    getline(cin, strInput);
    XoaTrai(strInput);
    XoaPhai(strInput);
    strInput=XoaGiua(strInput);
    for(int i=0; i<strInput.length(); i++){
        if(strInput[i]<='Z' && strInput[i]>='A'){
            strInput[i] += 32;
        }
    }
    strInput[0] -= 32;
    for(int i=0; i<strInput.length(); i++){
        if(strInput[i]==32){
            if(!(strInput[i+1]>='0' && strInput[i+1]<='9')) strInput[i+1] -= 32;
        }
    }
    cout <<"Chuoi da chuan hoa: "<<strInput<<endl;
    return 0;
}
