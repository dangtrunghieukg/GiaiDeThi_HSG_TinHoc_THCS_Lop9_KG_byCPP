#include <iostream>
using namespace std;

int main() {
    string strInput = "ABcBA";
    cout << "Nhap xau: ";
    getline(cin, strInput);
    string strOutput = "";
    for (int i = strInput.length() - 1; i >= 0; i--) {
        strOutput += strInput[i];
    }
    if (strInput == strOutput) {
        cout << "Xau " << strInput << " la xau Palindrome" << endl;    
    } else {
        cout << "Xau " << strInput << " khong phai xau Palindrome" << endl;    
    }
    return 0;
}