#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //assending sorting 
    sort(a,a+n);
    //decending sorting
    sort(a,a+n,greater<int>());
    //assending sorting output
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;
    
    //decending sorting outpur
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}