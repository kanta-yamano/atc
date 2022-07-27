#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, m, x, t, d;
    cin >> n >> m >> x >> t >> d;
    map<int, int> map;
    for (int i = 0; i <= x; i++)
    {
        map[x - i] = t - i * d;
    }
    for (int i = x + 1; i <= n; i++)
    {
        map[i] = t;
    }
    cout << map[m] << endl;
}