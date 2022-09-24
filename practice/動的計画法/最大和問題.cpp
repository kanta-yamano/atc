#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    int a[10010];

    int dp[10010];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        dp[i + 1] = max(dp[i] + a[i], dp[i]);
    }
    cout << dp[n] << endl;
}