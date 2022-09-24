#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll a, b, ans = 0;
    cin >> a >> b;
    bool x[3], y[3];

    memset(x, false, sizeof(x));
    memset(y, false, sizeof(y));
    for (int i = 0; i <= 7; i++)
    {
        if (a == i)
        {
            for (int k = 0; k < 3; k++)
            {

                if ((a & 1) == 1)
                {
                    x[0 + k] = true;
                }
                a = (a >> 1);
            }
        }
        if (b == i)
        {
            for (int k = 0; k < 3; k++)
            {
                if ((b & 1) == 1)
                {
                    y[0 + k] = true;
                }
                b = (b >> 1);
            }
        }
    }
    ll bit = 1;
    for (int i = 0; i < 3; i++)
    {
        if (x[i] || y[i])
        {
            ans += bit;
        }
        bit = (bit << 1);
    }
    cout << ans;
}