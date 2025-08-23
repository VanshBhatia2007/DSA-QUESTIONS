#include <iostream>
using namespace std;

int main(){
    int x=0,y=0;
    char ch;
    ch=cin.get();
    while(ch!='\n'){
        if(ch=='S')y--;
        else if(ch=='N')y++;
        else if(ch=='E')x++;
        else x--;
        
        ch=cin.get();
    }
    while(x>0) cout<<'E',x--;
    while(y>0) cout<<'N',y--;
    while(y<0) cout<<'S',y++;
    while(x<0) cout<<'W',x++;
    cout<<endl;
    return 0;
}