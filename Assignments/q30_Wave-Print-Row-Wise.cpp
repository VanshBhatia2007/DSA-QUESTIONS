#include<iostream>
using namespace std;

int main(){
    int M,N,num=0;
    cin>>M>>N;
    int a[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            a[i][j]=num;
            num++;
        }
        cout<<endl;
    }
    //wave print row wise
    for(int i=0;i<M;i++){
        if(i%2==0){
            for(int c=0;c<N;c++){
                cout<<a[i][c]<<", ";
            }
        }
        else{
            for(int c=N-1;c>=0;c--){
                cout<<a[i][c]<<", ";
            }
        }
    }
    cout<<"END";
    return 0;
}