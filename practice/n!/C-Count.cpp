#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, count = 0, b, c;
    cin >> n;
    vector<ll> p(n);
    vector<ll> q(n);
    vector<ll> one_case;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }
    for (int i = 1; i <= n; i++)
    {
        one_case.push_back(i);
    }
    do
    {
        count++;
        ll pc = 0, qc = 0;
        for (int i = 0; i < n; i++)
        {
            if (p[i] == one_case[i])
            {
                pc++;
            }
            if (q[i] == one_case[i])
            {
                qc++;
            }

            if (pc == n)
            {
                b = count;
            }
            if (qc == n)
            {
                c = count;
            }
        }

    } while (next_permutation(one_case.begin(), one_case.end()));
    cout << abs(b - c);
}