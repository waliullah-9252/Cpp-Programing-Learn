#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;

        //constructor
        Person(string name,int age){
            this->name=name;
            this->age=age;
        }
        //function
        void hello(void){
            cout<<"Hello World!";
        }
};
int main()
{
    Person rakib("Rakib Ahmed",25);
    cout<<rakib.name<<" "<<rakib.age<<endl;
    rakib.hello();
    return 0;
}