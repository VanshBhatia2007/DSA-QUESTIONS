#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int r=1;r<=n;++r){
        for(int i=1;i<=n-r;++i){
            cout<<"  ";
        }
        int no=r;
        for(int j=0;j<=r-1;j++){
            cout<<no<<" ";
            no+=1;
        }
        int noo=no-1;
        for(int i=r+1;i<=r*2-1;i++){
            noo=noo-1;
            cout<<noo<<" ";
        }
    cout<<endl;
    }
    
	return 0;
}