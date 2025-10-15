#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[100];
    cin.getline(s,100);
    int indx=0,cnt=0;
    char ch;
    for(int i=0;s[i]!='\0';i++){
        ch=s[i];
        cnt=0;
        while(s[i]==ch){
            cnt++;
            i++;
        }
        s[indx++]=ch;
        s[indx++]=cnt + '0';
        i--;
    }
    s[indx]='\0';
    for(int i=0;s[i]!='\0';i++){
        cout<<s[i];
    }
}