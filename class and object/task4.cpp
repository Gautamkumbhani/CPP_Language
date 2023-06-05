#include<iostream>
using namespace std;
class viru
{
    int Flightnumber;
    string Destination;
    float Distance,Fuel,calf;

    float CALFUEL()
    {
        if (Distance<=1000)
        {
            cout<<"500";
        }
        else if (Distance>=1000 && Distance<=2000)
        {
            cout<<"1100";
        }
        else    // more than 2000
        {
            cout<<"2200";
        }
    }

    public:
    void FEEDINFO()
    {
        cout<<"enter Flight Number: ";
        cin>>Flightnumber;
        cout<<"enter Destination: ";
        cin>>Destination;
        cout<<"enter Distance: ";
        cin>>Distance;

        calf = CALFUEL();
    }

    void SHOWINFO()
    {
        cout<<"Flight Number is: "<<Flightnumber<<endl;
        cout<<"destination is: "<<Destination<<endl;
        cout<<"Distance is: "<<Distance<<endl;
        cout<<"calf is: "<<calf<<endl;
        
    }

    
};

int main()
{
    viru a;
    a.FEEDINFO();
    a.SHOWINFO();
}