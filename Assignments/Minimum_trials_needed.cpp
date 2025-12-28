/*Aakash has K identical plates and N floors. He needs to find the lowest floor at which the plate will break down aka critical floor. However, he doesn't like climbing stairs again and again. So he decided to take your help. Help him design a strategy that would tell him the minimum no of trials he need to perform for knowing the critical floor.

Assume that plate will only break at critical floor and floors higher than that.

_Hint :
_Recursion tells u what u intend to calculate._
Test case 3 is only for students who think that the test cases are easy.


Input Format
The first line contains T, the number of test cases.
Next T line follows 2 space separated integers, first being the number of plates K, next being the number of floors N.


Constraints
0 < T < 10

0 < K < 1000

0 < N < 1000


Output Format
T lines of required answer


Sample Input
1
2 3
Sample Output
2
Explanation
Aakash can start dropping plates from floor 1, 2 or 3.

Consider floor 1 :

If the plate breaks, critical floor is floor 1 else he moves to floor 2 and repeat the process. By this method minimum no of trials to know the critical floor are 3.

Consider he starts with 2nd floor.

Now if the plate breaks, the number of floors left to be checked is 1, floor 1. If it doesn't break, then floors to be tested is floor 3. In both the cases the number of trials are 2. So Akash will start from floor 2*/
#include <bits/stdc++.h>
using namespace std;

int minTrials(int K, int N) {
    // dp[i][j] will store the minimum number of trials needed for i plates and j floors
    vector<vector<int>> dp(K + 1, vector<int>(N + 1, 0));

    // Base cases
    for (int i = 1; i <= K; i++) {
        dp[i][0] = 0; // 0 trials needed for 0 floors
        dp[i][1] = 1; // 1 trial needed for 1 floor
    }
    for (int j = 1; j <= N; j++) {
        dp[1][j] = j; // j trials needed for 1 plate and j floors
    }

    // Fill the dp table
    for (int i = 2; i <= K; i++) {
        for (int j = 2; j <= N; j++) {
            dp[i][j] = INT_MAX;
            for (int x = 1; x <= j; x++) {
                int res = 1 + max(dp[i - 1][x - 1], dp[i][j - x]);
                dp[i][j] = min(dp[i][j], res);
            }
        }
    }

    return dp[K][N];
}