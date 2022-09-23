#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template <typename T>
struct PrimeFact
{
    vector<T> spf;
    PrimeFact(T n)
    {
        init(n);
    }
    void init(T n)
    {
        spf.assign(n + 1, 0);
        for (T i = 0; i <= n; i++)
        {
            spf[i] = i;
        }
        for (T i = 2; i * i <= n; i++)
        {
            if (spf[i] == i)
            {
                for (T j = i * i; j <= n; j += i)
                {
                    if (spf[j] == j)
                    {
                        spf[j] = i;
                    }
                }
            }
        }
    }
    map<T, T> get(T n)
    {
        map<T, T> m;
        while (n != 1)
        {
            m[spf[n]]++;
            n /= spf[n];
        }
        return m;
    }
};

int main()
{
    ll n;
    cin >> n;
    PrimeFact<ll> P(n);
    map<ll, ll> ans = P.get(n);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i]; j++)
        {
            cout << i << " ";
        }
    }
}