#include <iostream>
using namespace std;
int N, tam;

bool Palindrome(int N)
{
string s;
int tam, chuso;
bool co;

    tam=N;
    co=true;
    while (tam != 0)
    {
        chuso=tam%10;
        s+=char16_t(chuso)+48;
        tam=tam/10;
    }
    for (int i=0;i<s.length()/2;i++)
    {
        if(s[i] != s[s.length()-i-1] )
        {
            co=false;
            break;
        }
    }
return co;
}

int main ()
{
    cout << "Nhap N:"; cin >> N;

    if (Palindrome(N)==true ) cout << N << " la so Palindrome";
    else
    {
        cout <<  N << " khong la so Palindrome" << endl;
        cout << "Palindrome lon hon " << N << " va gan "<< N << " nhat la ";
        tam=N;
        while(Palindrome(tam)==false)
        {
            tam++;
        }
    }
return 0;
}
