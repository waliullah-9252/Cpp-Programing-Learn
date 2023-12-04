#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
     //constructor
    Student(int r, int s, int c, char *n)
    {
        roll = r;
        section = s;
        cls = c;
        strcpy(name, n);
    }
};
int main()
{
    Student rahim(32, 'A', 8, "Karim Uddin");
    Student solim(55, 'C', 8, "Solimullah Haque");
    Student tanvir(89, 'B', 8, "Tanvir Haque");
    Student tareq(55, 'C', 8, "Tareq Uddin");

    cout << "Name:- " << rahim.name << endl
         << "Roll No:- " << rahim.roll << endl
         << "Class:- " << rahim.cls << endl
         << "Section:- " << rahim.section << endl;
    cout << endl
         << endl;
    cout << "Name:- " << solim.name << endl
         << "Roll No:- " << solim.roll << endl
         << "Class:- " << solim.cls << endl
         << "Section:- " << solim.section << endl;
    cout << endl
         << endl;
    cout << "Name:- " << tanvir.name << endl
         << "Roll No:- " << tanvir.roll << endl
         << "Class:- " << tanvir.cls << endl
         << "Section:- " << tanvir.section << endl;
    cout << endl
         << endl;
    cout << "Name:- " << tareq.name << endl
         << "Roll No:- " << tareq.roll << endl
         << "Class:- " << tareq.cls << endl
         << "Section:- " << tareq.section << endl;

    return 0;
}