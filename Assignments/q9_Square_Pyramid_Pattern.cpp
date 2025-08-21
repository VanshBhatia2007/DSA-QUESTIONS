#include<iostream>
using namespace std;
int main () {
    int n,a;
    cin>>n;
    for(int r=1;r<=n;r++){
        int no=1;
        cout<<no<<" ";
        for(int i=2;i<=r;i++){
            a=i*2-1;
            no=no+a;
            cout<<no<<" ";
        }
        cout<<endl;
    }
	return 0;
}