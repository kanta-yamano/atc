#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
using namespace std;
typedef long long ll;

int main(void)
{
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n));
    rep(i, 0, n) rep(j, 0, n) cin >> a[i][j];

    ll ans = 0;
    rep(i, 0, n) rep(j, 0, n) rep(k, 0, 8) // 8通り
    {
        int x = i, y = j;
        string res = "";
        rep(l, 0, n) //移動
        {
            res += a[x][y];
            switch (k)
            {
            case 0:
                y = (y + 1) % n;
                break;
            case 1:
                x = (x + 1) % n;
                y = (y + 1) % n;
                break;
            case 2:
                x = (x + 1) % n;
                y = (y + n - 1) % n;
                break;
            case 3:
                x = (x + 1) % n;
                break;
            case 4:
                x = (x + n - 1) % n;
                y = (y + 1) % n;
                break;
            case 5:
                x = (x + n - 1) % n;
                y = (y + n - 1) % n;
                break;
            case 6:
                x = (x + n - 1) % n;
                break;
            case 7:
                y = (y + n - 1) % n;
                break;
            }
        }
        ans = max(ans, stoll(res));
    }
    cout << ans << endl;
    return 0;
}