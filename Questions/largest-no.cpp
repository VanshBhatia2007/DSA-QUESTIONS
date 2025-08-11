#include <iostream>
#include <climits> // FOR USING INT_MIN & INT_MAX
using namespace std;
int main() {
    int i , n , l , no;
    l = INT_MIN;
    cin >> n;
    i = 1;
    while(i<=n){
        cin >>no;
        if(no>l){
            l = no;
        }
        i=i+1;
    }
    cout << "largest number is:" << l<< endl; //'/n'= endl
    return 0;
}