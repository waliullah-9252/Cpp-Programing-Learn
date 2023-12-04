#include<bits/stdc++.h>
using namespace std;
int *fun()
{
    // int a[5];
    int *a=new int[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    return a;
}
int main()
{
    int *a=fun();
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    delete[] a;  //delete a array function
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}