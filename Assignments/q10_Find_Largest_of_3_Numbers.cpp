#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n , l,no;
    l = INT_MIN;

    for(int i = 1 ; i<=3;i++){
        cin>>no;
        if(no>l){
            l=no;
        }
    }
    cout<<no;
	return 0;
}