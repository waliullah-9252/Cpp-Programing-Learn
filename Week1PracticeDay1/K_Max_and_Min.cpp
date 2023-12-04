#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mn = INT_MAX, mx = INT_MIN;
    // minimum check
    if (a <= b && a <= c)
    {
        mn = a;
    }
    else if (b <= a && b <= c)
    {
        mn = b;
    }
    else
    {
        mn = c;
    }
    // maximum check
    if (a >= b && a >= c)
    {
        mx = a;
    }
    else if (b >= a && b >= c)
    {
        mx = b;
    }
    else
    {
        mx = c;
    }
    // printing minimum and maximum
    cout << mn << " " << mx;
    return 0;
}