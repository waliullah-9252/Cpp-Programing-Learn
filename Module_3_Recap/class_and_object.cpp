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
    rahim.cls=10;
    rahim.roll=23;
    rahim.section='B';
    char nm[100]="Rahim Uddin";
    strcpy(rahim.name,nm);

    Student karim;
    karim.cls=10;
    karim.roll=23;
    karim.section='B';
    char nm2[100]="Karim Cholimullah";
    strcpy(karim.name,nm2);

    cout<<"Name: "<<rahim.name<<endl;
    cout<<"Class: "<<rahim.cls<<endl;
    cout<<"Roll No: "<<rahim.roll<<endl;
    cout<<"Section: "<<rahim.section<<endl;

    cout<<"Name: "<<karim.name<<endl;
    cout<<"Class: "<<karim.cls<<endl;
    cout<<"Roll No: "<<karim.roll<<endl;
    cout<<"Section: "<<karim.section<<endl;
    return 0;
}