/*Given a positive number N your task is to bring this number to 1 by performing only a set of operations. The operations can be either dividing the number by 2 only if the number is even or you can add or subtract 1 only if the number is odd.
More Precisely:
1) N=N/2 (if N is even)
2)N=N+1/ N=N-1 (if N is odd)
Your task is to minimize these number of operations.


Input Format
A single positive integer N


Constraints
n<=100000


Output Format
Print on a single line the minimum number of steps needed to reach 1 by performing the given operations.


Sample Input
8
Sample Output
3
Explanation
8->4->2->1*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int steps = 0;
    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            // If n is odd, we can either add 1 or subtract 1
            // We choose the operation that leads to a number that is divisible by 4
            if ((n + 1) % 4 == 0 && n != 3) {
                n += 1;
            } else {
                n -= 1;
            }
        }
        steps++;
    }
    cout << steps << endl;
}

int main() {
    solve();
    return 0;
}