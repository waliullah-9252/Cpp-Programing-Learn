#include<bits/stdc++.h>
using namespace std;
int main()
{
    //first dynamic array declear and input
    int* a=new int[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    //second dynamic array declear and a array value copy to b array
    int* b=new int[5];
    for(int i=0;i<5;i++){
        b[i]=a[i];
    }
    //b array extra value declear 
    b[3]=40;
    b[4]=50;
    //copying array output
    for(int i=0;i<5;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    //deleteing a array in the heap memory
    delete [] a;
    return 0;
}