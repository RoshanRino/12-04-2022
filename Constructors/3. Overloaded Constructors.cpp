#include<iostream>
using namespace std;
class Time
{
    int second;
    int minute;
    int hour;
public:
    void print_time()
    {
        cout<<"The Time is :";
        cout.width(2);
        cout.fill('0');
        cout<<hour<<":";
        cout.width(2);
        cout.fill('0');
        cout<<minute<<":";
        cout.width(2);
        cout.fill('0');
        cout<<second<<endl;
    }
    Time()
    {
        second=0;
        minute=0;
        hour=0;
    }
    Time(int a)
    {
        second=0;
        minute=0;
        hour=a;
    }
    Time(int a,int b)
    {
        second=0;
        minute=b;
        hour=a;
    }
    Time(int a,int b,int c)
    {
        second=c;
        minute=b;
        hour=a;
    }
};
int main()
{
    Time t(5,10,20),t1(5,10),t2(5),t3;
    cout<<"Object with 3 Arguments"<<endl;
    t.print_time();
    cout<<"Object with 2 Arguments"<<endl;
    t1.print_time();
    cout<<"Object with 1 Arguments"<<endl;
    t2.print_time();
    cout<<"Object with 0 Arguments"<<endl;
    t3.print_time();
    return 0;
}
