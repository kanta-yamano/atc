#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<bool> make_is_prime(ll n)
{
    vector<bool> tmp(n + 1, true);
    tmp[0] = false;
    tmp[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (!tmp[i])
        {
            continue;
        }
        for (int j = i * i; j <= n; j += i)
        {
            tmp[j] = false;
        }
    }
    return tmp;
}

int main()
{
    vector<bool> prime = make_is_prime(1299709);
    ll a, count = 2;
    cin >> a;

    if (prime[a] == true)
    {
        cout << "0";
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            if (!prime[a - i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        for (int i = 1; i <= a; i++)
        {
            if (!prime[a + i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count;
    }
}