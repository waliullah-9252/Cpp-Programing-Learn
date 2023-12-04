#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin >> tst;
    for (int i = 0; i < tst; i++)
    {
        string s,x;
        cin >>s>> x;
        while (s.find(x) != -1)
        {
            s.replace(s.find(x), x.length(), "$");
        }
        cout << s << endl;
    }
    return 0;
}