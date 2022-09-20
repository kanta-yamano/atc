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
    sort(ret.begin(), ret.end());
    return ret;
}

int main()
{
    ll n, cul = 0;
    cin >> n;
    vector<ll> div = divisor(n);

    for (int i = 0; i < (div.size() - 1); i++)
    {
        cul += div[i];
    }
    if (cul == n)
    {
        cout << "Perfect";
    }
    else if (cul < n)
    {
        cout << "Dificient";
    }
    else
    {
        cout << "Abundant";
    }
}