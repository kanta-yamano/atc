#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a[4] = {0};
    int card;
    for (int i = 0; i < n; i++)
    {
        cin >> card;
        if (card == 1)
            a[1]++;
        else if (card == 2)
            a[2]++;
        else if (card == 3)
            a[3]++;
    }

    long long ans[4];
    long long out = 0;
    for (int i = 1; i < 4; i++)
    {
        ans[i] = a[i] * (a[i] - 1) / 2;
    }

    cout << ans[1] + ans[2] + ans[3] << endl;

    return 0;
}