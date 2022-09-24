#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, W;
    cin >> n >> W;
    ll value[110], weight[110];
    ll dp[110][1010];
    for (int i = 0; i < n; i++)
    {
        cin >> value[i] >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (w >= weight[i])
            {
                dp[i + 1][w] = max(dp[i][w - weight[i]] + value[i], dp[i][w]);
            }
            else
            {
                dp[i + 1][w] = dp[i][w];
            }
        }
    }
    cout << dp[n][W];
}