#include <iostream>
#include <cctype>
using namespace std;
string s,x;
int main(){
    cout<<"Nhap xau 1:"; cin>>s;
    cout<<"Nhap xau 2:"; cin>>x;
    //Chuyển đổi toàn bộ kí tự sang in thường
    for(int i=0; i<s.length(); i++) s[i] = tolower(s[i]);
    for(int i=0; i<x.length(); i++) x[i] = tolower(x[i]);
    char temp;
    for(int i=0; i<s.length(); i++){
        for(int j=0; j<s.length(); j++){
            if(s[i]>s[j]){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(int i=0; i<x.length(); i++){
        for(int j=0; j<x.length(); j++){
            if(x[i]>x[j]){
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    for(int i=0; i<s.length(); i++){
        while(s[i]==s[i+1]){
            s.erase(i, 1);
        }
    }

    for(int i=0; i<x.length(); i++){
        while(x[i]==x[i+1]){
            x.erase(i, 1);
        }
    }
    cout << s << endl;
    cout << x << endl;
    if(s==x){
        cout<<"Hai xau la ban be"<<endl;
    }else{
        cout<<"Hai xau khong la ban be"<<endl;
    }
    return 0;
}
