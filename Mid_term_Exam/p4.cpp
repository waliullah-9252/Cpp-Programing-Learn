#include <bits/stdc++.h>
using namespace std;
//class
class Student
{
public:
    char name[100];
    int roll;
    int age;

    Student(int r, int a, char* n)
    {
        roll = r;
        age = a;
        strcpy(name, n);
    }
};
//function
Student fun(){
    char nm[100]="Rahim Uddin";
    Student r(22,16,nm);
    return r;
}
//main function
int main()
{
    Student rahim=fun();

    cout << rahim.name << endl;
    cout << rahim.age << " Age" << endl;
    cout << rahim.roll << endl;
    return 0;
}