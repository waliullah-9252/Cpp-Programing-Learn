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
Student fun(){
    char name[100]="Rahim Uddin";
    Student r(23,'A',12,name);
    return r;
}
Student fun1(){
    char name1[100]="Karim Uddin";
    Student k(36,'B',12,name1);
    return k;
}
int main()
{
    Student rahim=fun();
    Student karim=fun1();

    cout<<rahim.name<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<endl;
    cout<<karim.name<<endl;
    cout<<karim.cls<<endl;
    cout<<karim.roll<<endl;
    cout<<karim.section<<endl;
    return 0;
}