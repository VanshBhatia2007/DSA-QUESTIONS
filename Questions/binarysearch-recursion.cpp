#include<iostream>
using namespace std;

int binary(int *a,int s,int e,int key){
    //base case
    if(s>e) return -1;
    int m=(s+e)/2;
    if(a[m]==key){
        return m;
    }
    else if(key<a[m]) return binary(a,s,m-1,key);
    else return binary(a,m+1,e,key);
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);
	cout<<binary(a,0,n - 1,10);
	return 0;
}