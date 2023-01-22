#include <iostream>
using namespace std;
int main(){
    for(int x=1; x<100; x++)
        for(int y=1; y<100; y++)
            for(int z=1; z<100; z++){
                if(x+y+z==100 && 5*x+3*y+z/3==100 && z%3==0){
                    cout << x << " Trau dung \t";
                    cout << y << " Trau nam \t";
                    cout << z << " Trau gia.\n";
                }
            }
    return 0;
}
/* Các rên chưa tối ứu, cách sau đây tối ưu.
//x trâu đứng, y trâu nằm, z trâu già
//x+y+z=100 <=>z=100-x-y
//5x+3y+z/3=100 <=>z=300-15x-9y
//=>100-x-y=300-15x-9y <=> 7x+4y=100
int x, y, z;
int main(){
    for(int x=1; 100-7*x>0; x++){
        for(int y=1; 100-4*y>0; y++){
            if(7*x+4*y==100){
                    z=100-x-y;
                cout << x << " Trau dung \t";
                cout << y << " Trau nam \t";
                cout << z << " Trau gia \n";
            }
        }
    }
    return 0;
}
*/
