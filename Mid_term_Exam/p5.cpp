#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    char name[100];
    float height;
    int age;

    // constructor
    Person(int a, float h, char *n)
    {
        age = a;
        height = h;
        strcpy(name, n);
    }
};
int main()
{
    char name[100] = "Rahim Uddin";
    Person rahim(27, 5.2, name);

    char name1[100] = "Karim Uddin";
    Person karim(26, 5.4, name1);

    if (rahim.age >= karim.age)
    {
        cout << rahim.name;
    }
    else
    {
        cout << karim.name;
    }
    return 0;
}