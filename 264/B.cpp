#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int r, c;
    string ans = "white";
    cin >> r >> c;

    if ((r % 2) == 1)
    {
        if (r <= 8)
        {
            if (r <= c && c <= (16 - r))
            {
                ans = "black";
            }
        }
        else
        {
            if ((16 - r) <= c && c <= r)
            {
                ans = "black";
            }
        }
    }
    if ((c % 2) == 1)
    {
        if (c <= 8)
        {
            if (c <= r && r <= (16 - c))
            {
                ans = "black";
            }
        }
        else
        {
            if ((16 - c) <= r && r <= c)
            {
                ans = "black";
            }
        }
    }
    cout << ans;
}