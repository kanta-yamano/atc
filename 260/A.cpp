#include <iostream>

using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.at(0) == s.at(1) && s.at(1) != s.at(2))
        cout << s.at(2);
    else if (s.at(0) == s.at(2) && s.at(2) != s.at(1))
        cout << s.at(1);
    else if (s.at(1) == s.at(2) && s.at(2) != s.at(0))
        cout << s.at(0);
    else if (s.at(0) != s.at(1) && s.at(1) != s.at(2))
        cout << s.at(0);
    else
        cout << -1;
    cout << endl;
}