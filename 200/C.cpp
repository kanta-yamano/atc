#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    vector<int> a(n);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if ((a[i] - a[j]) % 200 == 0)
            {
                ans++;
            }
        }
    }
    cout << ans / 2;
}