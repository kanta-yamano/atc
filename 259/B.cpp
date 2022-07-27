#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, d, A, B;
    cin >> a >> b >> d;

    double r = hypot(a, b);
    double theta = atan2(a, b);

    theta += d * acos(-1.0) / 180.0; //弧度法に直してる

    A = cos(theta) * r;
    B = sin(theta) * r;

    cout << fixed << setprecision(10) << A << ' ' << B; // fixedで小数点を指定、setprecisionで桁数指定
}