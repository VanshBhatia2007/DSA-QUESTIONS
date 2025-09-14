#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[50];
    char b[50];
    cin.getline(a,50);
    cin.getline(b,50);
    int j=strlen(a);
    int c=strlen(b);
    for(int i=0;i<c;i++){
        a[j]=b[i];
        j++;
    }
    cout<<a;
    
    return 0;
}