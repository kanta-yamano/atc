#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1000000007;

ll pow(ll x, ll n)
{
    ll ret = 1;
    while (n > 0)
    {
        if (1 & n)
        {
            ret = ret * x % Mod;
        }
        x = x * x % Mod;
        n >>= 1;
    }
    return ret;
}

int main()
{
    ll x, n;
    cin >> x >> n;
    cout << pow(x, n);
}