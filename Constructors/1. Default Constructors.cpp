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
};
int main()
{
    Time t;
    t.print_time();
    return 0;
}
