#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

ll lcm(ll a, ll b)
{
    ll x, y;
    x = gcd(a, b);
    return a / x * b;
}

ll lcm2(const vector<ll> &vec)
{
    ll v = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        v = lcm(v, vec[i]);
    }
    return v;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> a;
    for (int i = 0; i < n; i++)
    {
        ll b;
        cin >> b;
        a.push_back(b);
    }

    ll ans = lcm2(a);
    cout << ans;
}