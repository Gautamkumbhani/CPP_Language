#include<iostream>
using namespace std;
class calc
{
    public:
    int various(int l,int w)
    {
        return l*w;
    }
     int various(int a)
    {
        return a*a;
    }
    double various(double b,double h)
    {
        return 0.5*(b*h);
    }
    double various(double r)
    {
        return 3.14*r*r;
    }

};
int main()
{
    calc a;

    cout<<"rectangle is: "<<a.various(5,7)<<endl;
    cout<<"square is: "<<a.various(15)<<endl;
    cout<<"triangle is: "<<a.various(10.0,15.0)<<endl;
    cout<<"circle is: "<<a.various(10.5)<<endl;
}