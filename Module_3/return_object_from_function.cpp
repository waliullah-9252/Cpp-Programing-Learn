#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, int s, int c, char* n)
    {
        roll = r;
        section = s;
        cls = c;
        strcpy(name, n);
    }
};
Student fun(){
    char nm[100]="Rahim Uddin";
    Student r(22,'A',8,nm);
    return r;
}
int main()
{
    Student rahim=fun();

    cout << rahim.name << endl;
    cout << rahim.cls << endl;
    cout << rahim.roll << endl;
    cout << rahim.section << endl;
    return 0;
}