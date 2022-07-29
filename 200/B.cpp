#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int k;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        if ((n % 200) == 0)
        {
            n /= 200;
        }
        else
        {
            string N = to_string(n) + "200";
            n = stoll(N);
        }
    }
    cout << n;
}