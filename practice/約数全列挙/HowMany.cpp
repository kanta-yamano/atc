#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> divisor(ll n)
{
    vector<ll> ret;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ret.push_back(i);
            if (i * i != n)
            {
                ret.push_back(n / i);
            }
        }
    }
    return ret;
}

int main()
{
    ll a, b, c, count = 0;
    cin >> a >> b >> c;
    vector<ll> div = divisor(c);

    for (ll i = a; i <= b; i++)
    {
        for (int j = 0; j < div.size(); j++)
        {
            if (i == div[j])
            {
                count++;
            }
        }
    }
    cout << count;
}