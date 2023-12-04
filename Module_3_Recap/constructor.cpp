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
    Student rahim(23,'B',10,"Rahim Uddin");
    Student solim(24,'A',10,"Solim Ullah");
    Student karim(35,'C',10,"Korim Khondokar");

    cout<<rahim.name<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.section<<endl;
    cout<<endl<<endl;
    cout<<solim.name<<endl;
    cout<<solim.roll<<endl;
    cout<<solim.cls<<endl;
    cout<<solim.section<<endl;
    cout<<endl<<endl;
    cout<<karim.name<<endl;
    cout<<karim.roll<<endl;
    cout<<karim.cls<<endl;
    cout<<karim.section<<endl;
    return 0;
}