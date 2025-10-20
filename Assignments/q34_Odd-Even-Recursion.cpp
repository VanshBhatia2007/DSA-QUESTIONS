#include<iostream>
using namespace std;

void even(int n){
    // ensure we start from an even number <= n
    if(n%2!=0) n--;
    // base case
    if(n<=0) return ;

    // recursive case: print evens in ascending order
    even(n-2);
    cout<<n<<endl;
}
void odd(int n){
    // base case
    if(n<=0) return ;
    // recursive case: print odds in descending order
    if(n%2!=0) cout<<n<<endl;
    odd(n-1);

}

int main(){
    int n;
    cin>>n;
    odd(n);
    even(n);
    return 0;
}