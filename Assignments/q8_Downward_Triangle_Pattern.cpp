#include<iostream>
using namespace std;

int main () {
    int n;
    int a=0;
    cin>>n;
    for(int r=1;r<=n;r++){
        for(int i=1;i<=r-1;i++){
            cout<< " ";
        }
       
        for(int i=1;i<=n-a;i++){
            
            cout<<"* ";
        }
        a=a+1;
        cout<<'\n';
    }
	return 0;
}