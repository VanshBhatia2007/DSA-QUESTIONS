/*Given 3 strings ,the task is to find the longest common sub-sequence in all three given sequences.
Input Format
First line contains first string . Second line contains second string. Third line contains the third string.
Constraints
The length of all strings is |s|< 200
Output Format
Output an integer denoting the length of longest common subsequence of above three strings.
Sample Input
GHQWNV
SJNSDGH
CPGMAH
Sample Output
2
Explanation
"GH" is the longest common subsequence*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int n = s1.size(), m = s2.size(), o = s3.size();
    int dp[n + 1][m + 1][o + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            for (int k = 0; k <= o; k++)
            {
                if (i == 0 || j == 0 || k == 0)
                    dp[i][j][k] = 0;
                else if (s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1])
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                else
                    dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
            }
        }
    }
    cout << dp[n][m][o] << endl;
}

int main()
{
    solve();
    return 0;
}