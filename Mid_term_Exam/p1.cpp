#include<bits/stdc++.h>
using namespace std;
int main()
{
    //create a dynamic memory
    int* karim=new int;//interger type dynamic memory syntax
    *karim=40;
    cout<<*karim<<endl;
    delete karim;
    cout<<*karim;
    
    return 0;
}