/*Any programmer worth his salt would be familiar with the famous Longest Common Subsequence problem. Mancunian was asked to solve the same by an incompetent programmer. As expected, he solved it in a flash. To complicate matters, a twist was introduced in the problem.

In addition to the two sequences, an additional parameter k was introduced. A k-ordered LCS is defined to be the LCS of two sequences if you are allowed to change atmost k elements in the first sequence to any value you wish to. Can you help Mancunian solve this version of the classical problem?


Input Format
The first line contains three integers N, M and k, denoting the lengths of the first and second sequences and the value of the provided parameter respectively. The second line contains N integers denoting the elements of the first sequence. The third line contains M integers denoting the elements of the second sequence.


Constraints
1 <= N, M <= 2000
1 <= k <= 5
1 <= element in any sequence <= 109


Output Format
Print the answer in a new line.


Sample Input
5 5 1
1 2 3 4 5
5 3 1 4 2
Sample Output
3*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> seq1(n), seq2(m);
    for (int i = 0; i < n; i++) {
        cin >> seq1[i];
    }
    for (int j = 0; j < m; j++) {
        cin >> seq2[j];
    }

    // dp[i][j][x] will store the length of the longest common subsequence of
    // the first i elements of seq1 and the first j elements of seq2 with at most x changes
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(k + 1, 0)));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            for (int x = 0; x <= k; x++) {
                if (seq1[i - 1] == seq2[j - 1]) {
                    dp[i][j][x] = dp[i - 1][j - 1][x] + 1;
                } else {
                    dp[i][j][x] = max(dp[i - 1][j][x], dp[i][j - 1][x]);
                    if (x > 0) {
                        dp[i][j][x] = max(dp[i][j][x], dp[i - 1][j - 1][x - 1] + 1);
                    }
                }
            }
        }
    }

    cout << dp[n][m][k] << endl;

    return 0;
}