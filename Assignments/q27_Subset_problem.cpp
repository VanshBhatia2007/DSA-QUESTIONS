#include<iostream>
using namespace std;


void subset(int *a,int *b,int n,int i,int j){
    //base case
    if(a[i]=='\0'){
        b[j]='\0';
        for(int k=0;k<j;k++){
            cout<<b[k]<<" ";
        }
        cout<<endl; 
    }

    //exclude
    subset(a,b,n,i+1,j);
    //include
    b[j]=a[i];
    subset(a,b,n,i+1,j+1);


}

int main(){
    
    int n,target,i,j;
    cin>>n;
    cin>>target;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    subset(a,b,n,0,0);
    return 0;
}