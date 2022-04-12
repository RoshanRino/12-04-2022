#include<iostream>
using namespace std;
class Person
{
    int id;
    string name;
public:
    Person(int a,string b)
    {
        id=a;
        name=a;
    }
    ~Person()
    {
        cout<<"Person Destroyed"<<endl;
    }
};
int main()
{
    Person p(1203,"Bob");
    p.~Person();
}
