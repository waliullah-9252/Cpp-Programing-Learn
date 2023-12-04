#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    for(int i=0;i<tst;i++){
        int n;
        cin>>n;
        int a[n];
        int even=0,odd=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(n%2!=0){
            cout<<"-1"<<endl;
        }else if(even==odd){
            cout<<"0"<<endl;
        }else if(even<odd){
            int a=odd/2;
            odd++;
            cout<<a<<endl;
        }else if(even>odd){
            int b=even/2;
            even++;
            cout<<b<<endl;
        }
    }
    return 0;
}