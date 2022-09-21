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
    return a / gcd(a, b) * b;
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
    vector<ll> t;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        t.push_back(a);
    }

    ll ans = lcm2(t);
    cout << ans;
}