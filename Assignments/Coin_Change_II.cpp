/*You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Print the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.

You may assume that you have an infinite number of each kind of coin.

The answer is guaranteed to fit into a signed 32-bit integer.


Input Format
First Line Contains amount
Second Line contains size of array
Third line contains elements of array


Constraints
1 <= coins.length <= 300
1 <= coins[i] <= 5000
All the values of coins are unique.
0 <= amount <= 5000


Output Format
Print the amount (Integer)


Sample Input
5
3
1 2 5
Sample Output
4
Explanation
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1*/
#include <bits/stdc++.h>
using namespace std;


int main() {
    int amount, n;
    cin >> amount >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    // dp[i] will store the number of combinations to make up amount i
    vector<int> dp(amount + 1, 0);
    dp[0] = 1; // Base case: there's one way to make up amount 0 (using no coins)

    for (int coin : coins) {
        for (int j = coin; j <= amount; j++) {
            dp[j] += dp[j - coin];
        }
    }

    cout << dp[amount] << endl;

    return 0;
}