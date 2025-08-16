#include <iostream>
using namespace std;
int main(){
    char i;
    cin>>i;
    if(i>='A' and i<='Z'){
        cout<<"Uppercase";
    }
    else if(i>='a' and i<='z'){
        cout<<"lowercase";
    }
    else{
        cout<<"not a character";
    }
    return 0;
}