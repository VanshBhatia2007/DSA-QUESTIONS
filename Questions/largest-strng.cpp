#include <iostream>
#include <cstring>
using namespace std;

int update(char largest[], char a[]){
    int len=strlen(a);
    for(int i=0;i<=len;++i){
        largest[i]=a[i];
    }
}

int main(){
    char a[100],largest[100];
    int la=0;
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n;++i){
        cin.getline(a,100);
        int len=strlen(a);
        if(len>la){
            la=len;
            update(largest,a);
        }
    }
    return 0;
}