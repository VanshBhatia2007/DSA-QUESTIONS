#include<iostream>
#include<vector>
using namespace std;

void subset_sum(vector<int> a,vector<int> b,int target,int i){
    //base case
    if(i==b.size()){
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        //recursive case
        int sum;
        for(int i=0;i<b.size();i++){
            
        }
    }
}


void subset(vector<int> &a,vector<int> &b,int i){
    //base case
    if(i==a.size()){
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        return;
    }
    //recursive case
    b.push_back(a[i]);
    //include
    subset(a,b,i+1);

    //exclude
    b.pop_back();
    subset(a,b,i+1);
}

int main(){
    
    int n,target,i,j,num;
    cin>>n;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        cin>>num;
        a.push_back(num);
    }
    cin>>target;
    subset(a,b,0);
    return 0;
}