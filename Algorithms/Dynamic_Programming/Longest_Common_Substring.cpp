#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to find the longest common substring of sequences
// `X[0…m-1]` and `Y[0…n-1]`
string LCS(string X, string Y, int m, int n)
{
    int maxlen = 0;         // stores the max length of LCS
    int endingIndex = m;    // stores the ending index of LCS in `X`

    // `dp[i][j]` stores the length of LCS of substring
    // `X[0…i-1]`, `Y[0…j-1]`
    vector <vector<int>> dp(m+1, vector <int> (n+1,0));

    // fill the dp table in a bottom-up manner
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // if the current character of `X` and `Y` matches
            if (X[i - 1] == Y[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;

                // update the maximum length and ending index
                if (dp[i][j] > maxlen)
                {
                    maxlen = dp[i][j];
                    endingIndex = i;
                }
            }
        }
    }
    // return longest common substring having length `maxlen`
    return X.substr(endingIndex - maxlen, maxlen);
}

int main()
{
    string X = "ABC", Y = "BABA";
    int m = X.length(), n = Y.length();

    // Find longest common substring
    cout << "The longest common substring is " << LCS(X, Y, m, n);

    return 0;
}
