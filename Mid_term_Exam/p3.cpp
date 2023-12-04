#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        char name[100];
        float height;
        int age;

        //constructor
        Person(int a,float h,char* n){
            age = a;
            height = h;
            strcpy(name,n);
        }
};
int main()
{
    char name[100]="Rahim Uddin";
    Person* rahim=new Person(23,5.2,name);//dynamic object syntax

    // cout<<(*rahim).name<<endl;
    // cout<<(*rahim).age<<endl;
    // cout<<(*rahim).height<<" Inch"<<endl;

    cout<<rahim->name<<endl;
    cout<<rahim->age<<endl;
    cout<<rahim->height<<" Inch"<<endl;

    return 0;
}