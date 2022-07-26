#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n, ans;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ans = a[0];
    for (int i = 1; i < n; i++)
    {
        while (a[i] >= 1 && ans >= 1)
        {
            if (a[i] > ans)
            {
                a[i] %= ans;
            }
            else
            {
                ans %= a[i];
            }
        }
        if (a[i] == 0)
        {
            continue;
        }
        else
        {
            ans = a[i];
        }
    }
    cout << ans;
}