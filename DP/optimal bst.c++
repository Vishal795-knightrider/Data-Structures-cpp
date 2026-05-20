#include <iostream>
#include <climits>
using namespace std;

#define MAX 100

int cost[MAX][MAX];
int root[MAX][MAX];
float freq[MAX];

void optimalBST(int n)
{
    float dp[MAX][MAX];

    for (int i = 0; i < n; i++)
    {
        dp[i][i] = freq[i];
        root[i][i] = i;
    }

    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;

            float sum = 0;
            for (int k = i; k <= j; k++)
                sum += freq[k];

            for (int r = i; r <= j; r++)
            {
                float left = (r > i) ? dp[i][r - 1] : 0;
                float right = (r < j) ? dp[r + 1][j] : 0;

                float total = left + right + sum;

                if (total < dp[i][j])
                {
                    dp[i][j] = total;
                    root[i][j] = r;
                }
            }
        }
    }

    cout << "Optimal Cost: " << dp[0][n - 1] << endl;
    cout << "Root of BST: K" << root[0][n - 1] + 1 << endl;
}

int main()
{
    int n;

    cout << "Enter number of keys: ";
    cin >> n;

    cout << "Enter frequencies:\n";

    for (int i = 0; i < n; i++)
        cin >> freq[i];

    optimalBST(n);

    return 0;
}