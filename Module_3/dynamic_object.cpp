#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,int s,int c,char* n){
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
int main()
{
    char name[100]="Rahim Uddin";
    Student* rahim=new Student(33,'A',11,name);

    // cout<<(*rahim).name<<endl;
    // cout<<(*rahim).cls<<endl;
    // cout<<(*rahim).roll<<endl;
    // cout<<(*rahim).section<<endl;

    cout<<rahim->name<<endl;
    cout<<rahim->cls<<endl;
    cout<<rahim->section<<endl;
    cout<<rahim->roll<<endl;

    delete rahim;

    cout<<rahim->name<<endl;
    cout<<rahim->cls<<endl;
    cout<<rahim->section<<endl;
    cout<<rahim->roll<<endl;

    return 0;
}