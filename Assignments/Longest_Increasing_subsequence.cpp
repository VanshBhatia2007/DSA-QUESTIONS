/*You are given an array of integers. Your task is to find the length of the Longest Increasing Subsequence (LIS) from the given array. The Longest Increasing Subsequence (LIS) is a subsequence of a sequence where the elements are sorted in strictly increasing order and the subsequence is as long as possible.


Input Format
The first line contains a single integer n, the size of the array.
The second line contains n integers, the elements of the array.

Constraints
1 ≤ n ≤ 106
-106 ≤ arr[i] ≤ 106

Output Format
Print a single integer, representing the length of the longest increasing subsequence.


Sample Input
7
10 2 9 2 5 3 7
Sample Output
3
Explanation
One of the possible longest increasing subsequence is [2, 5, 7], which has a length of 3.*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> dp(n, 1);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    cout << *max_element(dp.begin(), dp.end()) << endl;
}

int main()
{
    solve();
    return 0;
}

