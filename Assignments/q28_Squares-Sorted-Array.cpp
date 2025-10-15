#include<iostream>
#include<cmath>
using namespace std;

void bubblesort(int *nums,int n){
    for(int i=0;i<n-1;i++){
        bool swaphua=false;
        for(int j=0;j<n-1;j++){
            if(nums[j]>nums[j+1]){
                swaphua=true;
                swap(nums[j],nums[j+1]);
            }
        }
        if(swaphua==false){
            break;
        }
    }
    for(int i=0;i<n;++i){
        cout<<nums[i]<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        nums[i]=pow(nums[i],2);
    }
    bubblesort(nums,n);
    return 0;
}