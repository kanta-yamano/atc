#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, s, ans = 0;
    cin >> n >> m;
    vector<vector<int>> S(m, vector<int>(n, 0));
    vector<int> p(10);

    for (int i = 0; i < m; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> s;
            s--;
            S[i][j] = s;
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < (1 << n); i++)
    {
        int ok = 0;

        for (int j = 0; j < m; j++)
        {
            int count = 0;
            for (int a : S[j])
            {
                if ((1 << a) & i)
                {
                    count++;
                }
            }
            if (count % 2 == p[i])
            {
                ok++;
            }
        }
        if (ok == m)
        {
            ans++;
        }
    }
    cout << ans;
}