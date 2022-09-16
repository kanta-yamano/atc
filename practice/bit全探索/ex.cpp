#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, n) for (ll i = a; i < (n); ++i)
#define rep1(i, a, n) for (ll i = a; i <= (n); ++i)
#defint fore()
int N;
vector<int> honests[15];
vector<int> liars[15];
//---------------------------------------------------------------------------------------------------
void _main()
{
    cin >> N;
    rep(i, 0, N)
    {
        int A;
        cin >> A;
        rep(j, 0, A)
        {
            int x, y;
            cin >> x >> y;
            if (y == 0)
                liars[i].push_back(x - 1);
            else
                honests[i].push_back(x - 1);
        }
    }

    int ans = 0;
    rep(msk, 0, 1 << N)
    {
        bool ok = true;
        int tot = 0;
        rep(i, 0, N) if (msk & (1 << i))
        {
            tot++;
            fore(honest, honests[i]) if (!(msk & (1 << honest))) ok = false;
            fore(liar, liars[i]) if (msk & (1 << liar)) ok = false;
        }
        if (ok)
            chmax(ans, tot);
    }
    cout << ans << endl;
}