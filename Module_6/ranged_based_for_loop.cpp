#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // this loop use to index and charecter print
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }
    /*shortcut for loop this for loop to use a only
    cahracter print*/
    for (char c : s)
    {
        cout << c << endl;
    }
    return 0;
}