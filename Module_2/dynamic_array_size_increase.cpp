#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int[5];  //dynamic array syntax
    for(int i=0;i<5;i++){//daynamic array input
        cin>>a[i];
    }
    int *b=new int[7];  //another dynamic array syntax
    for(int i=0;i<7;i++){//copying array a to b 
        b[i]=a[i];
    }
    b[5]=6;  //declear array[5]
    b[6]=7;  //declear array[6]
    for(int i=0;i<7;i++){//output array b 
        cout<<b[i]<<" ";
    }
    cout<<endl;
    //delete a array
    delete[] a;
    //a array print
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}