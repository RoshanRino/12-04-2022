#include<iostream>
using namespace std;
class Father
{
    int id;
    string name;
public:
    Father()
    {
    }
    Father(int a,string b)
    {
        id=a;
        name=a;
    }
    ~Father()
    {
        cout<<"Father destructor"<<endl;
    }
};
class Son : public Father
{
    int id;
    string name;
public:
    Son()
    {
    }
    Son(int a,string b)
    {
        id=a;
        name=a;
    }
    ~Son()
    {
        cout<<"Son destructor"<<endl;
    }
};
class Mother
{
    int id;
    string name;
public:
    Mother()
    {
    }
    Mother(int a,string b)
    {
        id=a;
        name=a;
    }
    virtual ~Mother()
    {
        cout<<"Mother destructor"<<endl;
    }
};
class Daughter : public Mother
{
    int id;
    string name;
public:
    Daughter()
    {
    }
    Daughter(int a,string b)
    {
        id=a;
        name=a;
    }
    ~Daughter()
    {
        cout<<"Daughter destructor"<<endl;
    }
};
int main()
{
    Father* f = new Son;
    Mother* m = new Daughter;
    delete(f);
    cout<<endl;
    delete(m);

}
