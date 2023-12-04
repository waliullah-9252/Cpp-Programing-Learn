#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    switch(a%2)//jekno number ke 2 diya mod korle hoy 0 pabo na hoy 1 pabo
    {
        case 0:
            cout<<"Even"<<endl;
            break;
        default:
            cout<<"Odd"<<endl;
    }
    return 0;
}