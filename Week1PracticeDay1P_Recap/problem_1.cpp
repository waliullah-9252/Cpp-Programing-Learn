#include<bits/stdc++.h>
using namespace std;
int* get_array()
{
    // int* a=new int[5];
    int a[5];
    // for(int i=0;i<5;i++){
    //     cin>>a[i];
    // }
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;
    return a;
}
int main()
{
    int* a=get_array();
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    delete [] a;
    return 0;
}