#include <iostream>
using namespace std;

int length(char a[]){
    int i=0;
    
    while(a[i] !='\0'){
        
        i++;
    }
    a[i] = '\0';
    return i;
    
}

int main(){
    char a[50];
    cin.getline(a,50);
    cout<<length(a);
    return 0;
}