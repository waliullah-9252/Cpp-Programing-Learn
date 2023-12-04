#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;

        Person(string name,int age){
            this->name=name;
            this->age=age;
        }
};
int main()
{
    Person* rakib=new Person("Rakib Ahmed",25);
    Person* shakib=new Person("Shakib Ahmed",24);
    // rakib=shakib;
    //1st way this way is time weast so don't use
    // rakib->name=shakib->name;
    // rakib->age=shakib->age;
    // 2nd way and so shortcut
    *rakib=*shakib;
    delete shakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}