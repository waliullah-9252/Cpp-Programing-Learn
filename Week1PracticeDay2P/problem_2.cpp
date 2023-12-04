#include<bits/stdc++.h>
using namespace std;

class Crickter{
    public:
        int jursy_num;
        char country[10];
};
int main()
{
    //dhoni dynamic object
    char contry[10]="India";
    Crickter* dhoni=new Crickter;
    dhoni->jursy_num=18;
    strcpy(dhoni->country,contry);
    // cout<<dhoni->country<<endl;
    // cout<<dhoni->jursy_num<<endl;
    //copying to dhoni dynamic object to kholi dynamic object
    Crickter* kholi=new Crickter;
    kholi->jursy_num=dhoni->jursy_num;
    strcpy(kholi->country,dhoni->country);
    cout<<"Kholi Country and Jursy Number"<<endl;
    cout<<kholi->country<<endl;
    cout<<kholi->jursy_num<<endl;
    //deleting dhoni dynamic object
    delete dhoni;
    // cout<<dhoni->country<<endl;
    // cout<<dhoni->jursy_num<<endl;
    return 0;
}