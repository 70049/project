#include<iostream>
#include<conio.h>
using namespace std;
class Rectangle
{
private:
    int L,W,H,B,C;
public:
    void setdata(int l,int w,int h)
    {
        L=l;W=w;H=h;
    }
    void setdata(int b,int c)
    {
        B=b;C=c;
    }

    void showdata()
    {
        cout<<"Area of Rectangle is: "<<B*C;
        cout<<endl<<"Volume of Rectangle is: "<<L*W*H;
    }
};
int main()
{
    Rectangle R1;
    R1.setdata(10,20);
    R1.setdata(2,4,2);
    R1.showdata();
    getch();
}

