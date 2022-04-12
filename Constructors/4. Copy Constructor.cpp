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
    Time(int a,int b,int c)
    {
        second=c;
        minute=b;
        hour=a;
    }
    Time (Time &t)
    {
        second=t.second;
        minute=t.minute;
        hour=t.hour;
    }
};
int main()
{
    Time t(5,10,20);
    Time copy_t(t);
    t.print_time();
    copy_t.print_time();
    return 0;
}
