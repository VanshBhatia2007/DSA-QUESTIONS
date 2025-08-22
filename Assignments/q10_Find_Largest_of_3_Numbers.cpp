#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n , l,no;
    l = INT_MIN;
    cin>>n;
    for(int i = 1 ; i<=n;i++){
        cin>>no;
        if(no>l){
            l=no;
        }
    }
    cout<<l;
	return 0;
}