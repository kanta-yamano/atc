#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll gcd(ll x, ll y)
{
    while (x >= 1 && y >= 1)
    {
        if (x > y)
        {
            x %= y;
        }
        else
        {
            y %= x;
        }
    }
    if (x == 0)
    {
        return y;
    }
    else
    {
        return x;
    }
}
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll y = a[0];
    for (int i = 1; i < n; i++)
    {
        y = (y / gcd(y, a[i])) * a[i];
    }
    cout << y << endl;
}
