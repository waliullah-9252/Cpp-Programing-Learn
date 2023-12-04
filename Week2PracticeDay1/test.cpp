#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "IWALILOVEWALIYOU";
    // int res = s.find("WALI");
    // s.replace(res,4," ");
    // cout<<s<<" ";
    while (s.find("WALI") != -1)
    {
        s.replace(s.find("WALI"), 4, " ");
    }
    cout << s << " ";
    // cout<<res<<endl;

    return 0;
}