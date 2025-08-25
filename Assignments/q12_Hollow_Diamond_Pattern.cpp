#include <iostream>
using namespace std;
int main() {
    int n,spaces,stars;
    
    
    cin>>n;
    for(int r=1;r<=n;r++){
        if(r==1){
            for(int i=1;i<=n*2-1;i++){
                cout<<"*\t";
            }
        }
        else{
            spaces= r*2-3;
            stars=((2*n-1)-spaces)/2;
            for(int i=1;i<=stars;i++){
                cout<<"*\t";
            }
            for(int i=1;i<=spaces;i++){
                cout<<"\t";
            }
            for(int i=1;i<=stars;i++){
                cout<<"*\t";
            }
        }
        cout<<endl;
    }
    for(int row=n-1;row>=1;row--){
        if(row==1){
            for(int i=1;i<=n*2-1;i++){
                cout<<"*\t";
            }
        }
        else{
            spaces= row*2-3;
            stars=((2*n-1)-spaces)/2;
            for(int i=1;i<=stars;i++){
                cout<<"*\t";
            }
            for(int i=1;i<=spaces;i++){
                cout<<"\t";
            }
            for(int i=1;i<=stars;i++){
                cout<<"*\t";
            }
        }
        cout<<endl;
    }
    return 0;
}