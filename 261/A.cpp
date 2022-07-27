#include <iostream>
#include <map>
using namespace std;
int main()
{
    int L1, R1, L2, R2, ans = 0;
    cin >> L1 >> R1 >> L2 >> R2;

    map<int, int> map;

    for (int i = L1; i < R1; i++)
    {
        map[i]++;
    }
    for (int i = L2; i < R2; i++)
    {
        map[i]++;
    }
    for (auto p : map)
    {
        if (p.second == 2)
        {
            ans++;
        }
    }

    cout << ans << endl;
}