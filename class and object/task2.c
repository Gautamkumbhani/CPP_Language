#include<iostream>
using namespace std;
class batsman
{
    char bcode[4];
    char bname[50];
    int innings,notout,runs,batavg;
    void calcavg()
    {
        return batavg=runs/(innings-notout);
    }

    public:
    void readdata()
    {
        cout<<"enter bcode: ";
        cin>>bcode;
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter innings: ";
        cin>>innings;
        cout<<"enter notout: ";
        cin>>notout;
        cout<<"enter runs: ";
        cin>>runs;

        calc = calcavg();
    }
    void displaydata()
    {
        cout<<"bcode is : "<<bcode<<endl;
        cout<<"name is : "<<name<<endl;
        cout<<"innings is : "<<innings<<endl;
        cout<<"notout is : "<<notout<<endl;
        cout<<"runs is : "<<runs<<endl;
        cout<<"calc is: "<<calc<<endl;
    }

};

int main()
{
    batsman a;
    a.readdata();
    a.displaydata();
}