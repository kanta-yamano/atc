#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    bool ans = false;
    cin >> n;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i * j == n)
            {
                ans = true;
            }
        }
    }
    if (ans)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}