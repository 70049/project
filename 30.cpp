//CPP PROGRAM TO OVERLOAD >GREATER THAN OPERATOR//
#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
private:
    int HR,MIN,SEC;
public:
    void settime(int h,int m,int s)
    {
        HR=h;MIN=m;SEC=s;
    }
    void showtime()
    {
        cout<<endl<<"Time is "<<HR<<":"<<MIN<<":"<<SEC;
    }
    int operator >(Time t)
    {
        if(HR>t.HR)
            return (1);
        else if(HR<t.HR)
            return (0);
        if(MIN>t.MIN)
            return (1);
        else if(MIN<t.MIN)
            return (0);
        if(SEC<t.SEC)
            return (1);
        else if(SEC<t.SEC)
            return (0);
    }
    void nor()
    {
        MIN=MIN+SEC/60;
        SEC=SEC%60;
        HR=HR+MIN/60;
        MIN=MIN%60;
    }
};
int main()
{
    Time t1,t2;
    t1.settime(10,10,0);
    t2.settime(2,9,30);
    t1.nor();
    t2.nor();
    if(t1>t2)
        t1.showtime();
    else
        t2.showtime();
    getch();
}

