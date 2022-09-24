#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll x, y, z, ans = 0;
    cin >> x >> y >> z;

    if (x > 0)
    {
        if (y > x)
        {
            ans = x;
        }
        else if (y > 0)
        {
            if (z > y)
            {
                ans = -1;
            }
            else if (z > 0)
            {
                ans = x;
            }
            else
            {
                ans += 2 * abs(z);
                ans += x;
            }
        }
        else
        {
            ans = x;
        }
    }
    else
    {
        if (y < x)
        {
            ans = abs(x);
        }
        else if (y < 0)
        {
            if (z < y)
            {
                ans = -1;
            }
            else if (z < 0)
            {
                ans = abs(x);
            }
            else
            {
                ans += 2 * abs(z);
                ans += abs(x);
            }
        }
        else
        {
            ans = abs(x);
        }
    }
    cout << ans;
}