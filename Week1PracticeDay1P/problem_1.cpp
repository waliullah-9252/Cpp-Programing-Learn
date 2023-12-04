#include<bits/stdc++.h>
using namespace std;
int* get_array(){
    int* a=new int[7];
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    return a;
}
int main()
{
    int* a=get_array();
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
    delete [] a;
    return 0;
}