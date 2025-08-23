#include <iostream>
using namespace std;

int main(){
    int cnt=0;
    char ch;
    ch=cin.get();//it will count whitespace character
    //cin>>ch; //whitespace char[' ',/n,/t]
    while(ch!='$'){
        cnt++;
        ch=cin.get();

    }
    cout<<"total no of characters:"<<cnt;
    return 0;
}