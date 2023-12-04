#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;

    // constructor
    Student(int rl, char sc, int m_mark, int clss, char *n)
    {
        roll = rl;
        section = sc;
        math_marks = m_mark;
        cls = clss;
        strcpy(name, n);
    }
};
int main()
{
    char r[100] = "Rahim Uddin";
    Student rahim(22, 'A', 88, 10, r);
    char s[100] = "Rahim Uddin";
    Student karim(22, 'A', 88, 10, s);
    char t[100] = "Rahim Uddin";
    Student solim(22, 'A', 88, 10, t);

    if (rahim.math_marks >= karim.math_marks && rahim.math_marks >= solim.math_marks)
    {
        cout << rahim.name << endl;
    }
    else if (karim.math_marks >= rahim.math_marks && karim.math_marks >= solim.math_marks)
    {
        cout << karim.name << endl;
    }
    else
    {
        cout << solim.name << endl;
    }
    return 0;
}