#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        //constructor
        Student(int r,char s,int c,char* n){
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
int main()
{
    char name[100]="Rahim Uddin";
    // Student rahim(22,'A',12,name);
    Student* rahim=new Student(22,'A',12,name);

    cout<<rahim->name<<endl;
    cout<<rahim->cls<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->section<<endl;

    delete rahim;

    cout<<rahim->name<<endl;
    cout<<rahim->cls<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->section<<endl;
    return 0;
}