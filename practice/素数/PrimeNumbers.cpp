#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_prime(long long n)
{ // is n prime or not
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ll n, count = 0, a;
    bool ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ans = is_prime(a);
        if (ans)
        {
            count++;
        }
    }
    cout << count;
}