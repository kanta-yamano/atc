#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    long double sum = 0;
    cin >> n;
    vector<ll> one_case;
    ll x[8], y[8];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++)
    {
        one_case.push_back(i);
    }
    do
    {
        for (int i = 0; i < (n - 1); i++)
        {
            ll a = one_case[i];
            ll b = one_case[i + 1];

            long double dx = x[a] - x[b];
            long double dy = y[a] - y[b];

            sum += sqrt(dx * dx + dy * dy);
        }
    } while (next_permutation(one_case.begin(), one_case.end()));

    for (int i = 0; i < n; i++)
    {
        sum /= (i + 1);
    }
    cout << fixed << setprecision(5) << sum;
}