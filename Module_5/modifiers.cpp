#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="Hello";
    string b="World";
    // a+=b;
    a.append(b);
    // cout<<a<<endl;
    // cout<<b<<endl;
    // a[5]='A'; -> not work
    // a=a+b; -> works
    // a="HelloA"; -> works
    // a.push_back('W');
    // a.pop_back();
    // a.pop_back();
    cout<<a<<endl;
    return 0;
}