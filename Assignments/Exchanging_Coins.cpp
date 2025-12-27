/*Tughlaq introduces a strange monetary system. He introduces copper coins and each coin has a number written on it. A coin n can be exchanged in a bank into three copper coins: n/2, n/3 and n/4. A coin can also be sold for gold. One can get as much grams of gold as the number written on the coin. You have one copper coin. What is the maximum weight of gold one can get from it?


Input Format
The input file contains a single integer n, the number on the coin.


Constraints
0 <= n <= 1 000 000 000


Output Format
Print the maximum weight of gold you can get.


Sample Input
12
Sample Output
13*/
#include <bits/stdc++.h>
using namespace std;

long long maxGold(long long n) {
    if (n < 12) {
        return n; // If n is less than 12, it's better to sell the coin
    }
    // Otherwise, exchange the coin and sum the gold from the exchanged coins
    return max(n, maxGold(n / 2) + maxGold(n / 3) + maxGold(n / 4));
}

int main() {
    long long n;
    cin >> n;
    cout << maxGold(n) << endl;
    return 0;
}