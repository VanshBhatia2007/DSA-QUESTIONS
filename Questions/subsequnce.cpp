#include<iostream>
using namespace std;

void subs(char *ip,int i,char *op,int j){
    if(ip[i]=='\0'){
        op[j]='\0';
        cout<<op<<endl;
        return;
    }
    //exclude
    subs(ip,i+1,op,j);
    //include
    op[j]=ip[i];
    subs(ip,i+1,op,j+1);
}

int main(){
    char a[]="abc";
    char op[100];
    subs(a,0,op,0);
    return 0;
}