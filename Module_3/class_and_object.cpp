#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main()
{
    Student rahim;
    rahim.roll=14;
    rahim.cls=10;
    rahim.section='A';
    char nm[100]="Rahim Uddin";
    strcpy(rahim.name,nm);

    Student karim;
    karim.roll=33;
    karim.cls=10;
    karim.section='B';
    char nm2[100]="Karim Gazi";
    strcpy(karim.name,nm2);

    cout<<"Name: "<<rahim.name<<endl<<"Roll No: "<<rahim.roll<<endl<<"Class: "<<rahim.cls<<endl<<"Section: "<<rahim.section<<endl;
    cout<<endl<<endl;
    cout<<"Name: "<<karim.name<<endl<<"Roll No: "<<karim.roll<<endl<<"Class: "<<karim.cls<<endl<<"Section: "<<karim.section<<endl;
    return 0;
}