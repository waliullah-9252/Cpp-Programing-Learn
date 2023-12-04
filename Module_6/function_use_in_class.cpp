#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;

    // constructor
    Person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    }

    // normal function 1
    void hello(void)
    {
        // cout<<"Hello World!"<<endl;
        cout << name << " " << age << endl;
    }
    // return type function
    int total_marks(void)
    {
        return marks1 + marks2;
    }
};
int main()
{
    Person rakib("Rakib Ahmed", 25, 96, 88);
    // cout << rakib.name << " " << rakib.age << endl;
    cout << rakib.total_marks() << endl;
    ;
    return 0;
}