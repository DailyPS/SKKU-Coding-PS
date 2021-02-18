#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, m;
    int dp[15][10005];
    const int INF = 1e9 + 5;

    scanf("%d %d", &n, &m);

    fill_n(&dp[0][0], 15 * 10005, INF);
    dp[0][0] = 0;

    for (int i = 1; i <= n; i++)
    {
        int target;
        scanf("%d", &target);

        for (int j = 1; j <= m; j++)
        {
            for (int k = 1; k * k <= j; k++)
            {
                int cost_add = (target - k) * (target - k);

                dp[i][j] = min(dp[i][j], dp[i - 1][j - k * k] + cost_add);
            }
        }
    }

    if (dp[n][m] == INF)
        printf("%d", -1);

    else
        printf("%d", dp[n][m]);
    
    return 0;
}