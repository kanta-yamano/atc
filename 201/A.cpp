#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    if (((a[2] - a[1]) == (a[1] - a[0])) || ((a[1] - a[0]) == (a[0] - a[2])) || ((a[0] - a[2]) == (a[2] - a[1])))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}