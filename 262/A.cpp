#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int y;
    cin >> y;
    switch (y % 4)
    {
    case 0:
        y += 2;
        break;
    case 1:
        y += 1;
        break;
    case 2:
        break;
    case 3:
        y += 3;
        break;
    }
    cout << y;
}