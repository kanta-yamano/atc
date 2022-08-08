#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
    int n;
    int a;
    ll b = 0, c = 0, d = 0, e = 0;
    ll ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        switch (a)
        {
        case 100:
            b++;
            break;
        case 200:
            c++;
            break;
        case 300:
            d++;
            break;
        case 400:
            e++;
            break;
        }
    }
    ans = b * e + c * d;
    cout << ans;
}