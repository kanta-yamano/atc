#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<char>> arr(n, vector<char>(n, 0));
    for (vector<char> &p : arr)
    {
        for (char &c : p)
        {
            cin >> c;
        }
    }
    bool contradictory = false;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                // i beats j
                if ((arr[i][j] == 'W') && (arr[j][i] != 'L'))
                {
                    contradictory = true;
                }
                else if ((arr[i][j] == 'L') && (arr[j][i] != 'W'))
                {
                    contradictory = true;
                }
                else if ((arr[i][j] == 'D') && (arr[j][i] != 'D'))
                {
                    contradictory = true;
                }
                if (contradictory)
                {
                    cout << "incorrect" << endl;
                    return;
                }
            }
        }
    }
    cout << "correct" << endl;
}

int main()
{
    int n;
    n = 1;
    while (n--)
    {
        solve();
    }
}