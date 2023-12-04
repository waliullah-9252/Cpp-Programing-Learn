#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age=24;
    void hello(void){
        cout<<"Rakib namespaces"<<endl;
    }
}
namespace Shakib
{
    int age2=34;
    void hello2(void){
        cout<<"Shakib namespaces"<<endl;
    }
}
using namespace Rakib;
using namespace Shakib;
int main()
{
    // cout<<Rakib::age<<endl;
    // cout<<Shakib::age2<<endl;
    // Rakib::hello();
    // Shakib::hello2();
    cout<<age<<endl;
    Rakib::hello();
    cout<<age2<<endl;
    Shakib::hello2();
    return 0;
}