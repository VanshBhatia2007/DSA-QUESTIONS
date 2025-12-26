/*Given a string s, partition s such that every substring of the partition is a palindrome.

Return all possible palindrome partitioning of s.


Input Format
The input consists of a single string s.


Constraints
1 ≤ len(s) ≤ 16
s consists of lowercase English letters only.

Output Format
Return a 2D list containing all possible palindrome partitioning, where each list represents a partition, and each string in the list is a palindrome.

Note: Complete the given funtion only do not modify anything inside the main function


Sample Input
aab
Sample Output
[["a", "a", "b"], ["aa", "b"]]
Explanation
The possible palindromic partitions are:

["a", "a", "b"]
["aa", "b"]*/
#include <bits/stdc++.h>
using namespace std;

void backtrack(const string &s, int start, vector<string> &current, vector<vector<string>> &result)
{
    if (start == s.size())
    {
        result.push_back(current);
        return;
    }
    for (int end = start; end < s.size(); end++)
    {
        string substring = s.substr(start, end - start + 1);
        if (substring == string(substring.rbegin(), substring.rend()))
        {
            current.push_back(substring);
            backtrack(s, end + 1, current, result);
            current.pop_back();
        }
    }
}

vector<vector<string>> partition(string s)
{
    vector<vector<string>> result;
    vector<string> current;
    backtrack(s, 0, current, result);
    return result;
}

int main()
{
    string s;
    cin >> s;
    vector<vector<string>> result = partition(s);
    cout << "[";
    for (size_t i = 0; i < result.size(); i++)
    {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); j++)
        {
            cout << "\"" << result[i][j] << "\"";
            if (j < result[i].size() - 1)
                cout << ", ";
        }
        cout << "]";
        if (i < result.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}