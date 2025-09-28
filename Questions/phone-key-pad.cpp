#include<iostream>
using namespace std;

char keys[10][10] = {
	"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

void phn(char *ip,char *op,int i,int j){
    if(ip[i]=='\0'){
        op[j]=='\0';
        cout<<op<<endl;
        return;
    }
    int digit=ip[i]-'0';
    for(int k=0;keys[digit][k]!=0;k++){
        op[j]=keys[digit][k];
        phn(ip,op,i+1,j+1);
    }

}
int main(){
    char ip[100];
    cin>>ip;
    char op[100];
    phn(ip,op,0,0);
}
