#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, x, y, z, big;
    cin >> n >> x >> y >> z;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a.at(i);
    for (int i = 0; i < n; i++)
        cin >> b.at(i);

    vector<bool> f(n);

    for (int i = 0; i < x; i++)
    {
        big = -1;
        for (int j = 0; j < n; j++)
        {
            if (!f.at(j))
            {
                if (big == -1 || a.at(big) < a.at(j))
                    big = j;
            }
        }
        f.at(big) = true;
    }

    for (int i = 0; i < y; i++)
    {
        big = -1;
        for (int j = 0; j < n; j++)
        {
            if (!f.at(j))
            {
                if (big == -1 || b.at(big) < b.at(j))
                    big = j;
            }
        }
        f.at(big) = true;
    }

    for (int i = 0; i < z; i++)
    {
        big = -1;
        for (int j = 0; j < n; j++)
        {
            if (!f.at(j))
            {
                if (big == -1 || a.at(big) + b.at(big) < a.at(j) + b.at(j))
                    big = j;
            }
        }
        f.at(big) = true;
    }

    for (int i = 0; i < n; i++)
    {
        if (f.at(i))
            cout << i + 1 << endl;
    }
}