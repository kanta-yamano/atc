#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, n, min = 0;
    cin >> x >> y >> n;

    if (3 * x > y)
    {
        int X, Y;
        X = n % 3;
        Y = n / 3;
        min = x * X + y * Y;
    }
    else
    {
        min = x * n;
    }

    cout << min;
}