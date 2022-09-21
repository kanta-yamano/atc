#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}

int main()
{
    int x, y;
    cin >> x, y;
    int ans = gcd(x, y);
    cout << ans;
}