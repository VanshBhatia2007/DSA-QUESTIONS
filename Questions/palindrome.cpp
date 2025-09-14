#include <iostream>
#include <cstring>
using namespace std;

bool check(char *a){
    int i=0;
    int j=strlen(a)-1;
    while (i<j)
    {
        if(a[i]!=a[j]){
            return false;
        }
    i++;
    j--;
    }
    return true;
}

int main(){
    char a[50];
    cin.getline(a,50);
    if(check(a)==true){
        cout<<"palindrome"<<endl;
    }
    else cout<<"not a palindrome";

    return 0;
    
}