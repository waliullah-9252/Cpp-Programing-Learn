#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin >> tst;
    for (int i = 1; i <= tst; i++)
    {
        string a;
        cin >> a;
        if (a[0] + a[1] + a[2] == a[3] + a[4] + a[5])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}