#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            int count = 0;
            for (int j = 1; j * j <= i; j++)
            {
                if (i % j != 0)
                {
                    continue;
                }
                else
                {
                    count++;
                    if (j != i / j)
                    {
                        count++;
                    }
                }
            }
            if (count == 8)
            {
                ans++;
            }
        }
    }
    cout << ans;
}