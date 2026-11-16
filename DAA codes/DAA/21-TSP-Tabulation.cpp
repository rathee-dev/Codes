
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of cities: ";
    cin >> n;

    vector<vector<int>> cost(n, vector<int>(n));

    cout << "Enter cost matrix:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> cost[i][j];
    }

    int N = 1 << n;

    vector<vector<int>> dp(N, vector<int>(n, INT_MAX));

    dp[1][0] = 0;

    for(int mask = 1; mask < N; mask++)
    {
        for(int city = 0; city < n; city++)
        {
            if(mask & (1 << city))
            {
                if(dp[mask][city] == INT_MAX)
                    continue;

                for(int i = 0; i < n; i++)
                {
                    if(!(mask & (1 << i)))
                    {
                        int newMask = mask | (1 << i);

                        dp[newMask][i] = min(dp[newMask][i],
                            dp[mask][city] + cost[city][i]);
                    }
                }
            }
        }
    }

    int ans = INT_MAX;

    for(int i = 1; i < n; i++)
    {
        ans = min(ans, dp[N-1][i] + cost[i][0]);
    }

    cout << "Minimum optimal cost: " << ans;

    return 0;
}
