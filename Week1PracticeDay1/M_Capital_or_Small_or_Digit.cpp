#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>='0' && ch<='9'){
        cout<<"IS DIGIT";
    }else{
        cout<<"ALPHA"<<endl;
        if(ch>='a' && ch<='z'){
            cout<<"IS SMALL";
        }else{
            cout<<"IS CAPITAL";
        }
    }
    return 0;
}