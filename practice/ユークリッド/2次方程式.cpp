#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// ax+by=gcd(a,b)のときだけ
long long extend_gcd(long long a, long long b, long long &x, long long &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    else
    {
        long long d = extend_gcd(b, a % b, y, x);
        y -= a / b * x;
        return d;
    }
}

int main()
{
    ll a, b, x, y, ans;

    extend_gcd(a, b, x, y);
}