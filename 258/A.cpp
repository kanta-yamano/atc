#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, h, m;
    string M;
    cin >> k;

    h = k / 60;
    m = k % 60;

    h += 21;
    string H = to_string(h);
    if (m < 10)
    {
        M = "0" + to_string(m);
    }
    else
    {
        M = to_string(m);
    }

    cout << H << ":" << M << endl;
}