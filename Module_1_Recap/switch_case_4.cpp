#include<bits/stdc++.h>
using namespace std;
int main()
{
    int value;
    cin>>value;
    switch(value%2)//jekno number ke 2 diya mod korle hoy 0 na hoy 1 hobe
    {
        case 0:
            cout<<"Even"<<endl;
            break;
        default:
            cout<<"Odd"<<endl;
    }
    return 0;
}