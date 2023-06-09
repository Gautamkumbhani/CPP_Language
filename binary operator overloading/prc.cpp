#include<iostream>
using namespace std;
class Box
{
    int l,w,h;
    public:
    void setdata(int a,int b,int c)
    {
        l = a,w = b, h = c;
    }
    int getdata()
    {
        return l * w * h;
    }
    Box operator+(Box n)
    {
        Box t;
        t.l = l + n.l;
        t.w = w + n.w;
        t.h = h + n.h;
        return t;
    }
};

int main()
{
    Box a,b,c;
    a.setdata(4,4,4);
    cout<<"value of box a is: "<<a.getdata()<<endl;

    b.setdata(6,6,6);
    cout<<"value of box b is: "<<b.getdata()<<endl;

    c = a + b;
    cout<<"value of box c is: "<<c.getdata()<<endl;
}