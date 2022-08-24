#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, m, t;
    cin >> n >> m >> t;
    ll a[n];
    for (ll i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    ll b[m], c[m];
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i] >> c[i];
    }
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (i == b[j])
            {
                t += c[j];
            }
        }
        t -= a[i];

        if (t <= 0)
        {
            cout << "No";
            break;
        }
        if (i == n - 1)
        {
            cout << "Yes";
            break;
        }
    }
}
