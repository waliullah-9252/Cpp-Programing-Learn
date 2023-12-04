#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    cin>>n;
    int* a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m=10;
    cin>>m;
    int* b=new int[m];
    for(int i=0;i<5;i++){
        b[i]=a[i];
    }
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    // delete[] a;
    // for(int i=0;i<3;i++){
    //     cout<<a[i]<<" ";
    // }
    return 0;
}