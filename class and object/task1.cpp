#include<iostream>
using namespace std;
class student
{
    int admno;
    char sname[20];
    float eng,math,science,total;

    float ctotal()
    {
        return eng + math + science;
    }

    public: 
    void Takedata()
    {
        cout<<"enter admno: ";
        cin>>admno;
        cout<<"enter sname: ";
        cin>>sname;
        cout<<"enter english marks: ";
        cin>>eng;
        cout<<"enter math marks: ";
        cin>>math;
        cout<<"enter science marks: ";
        cin>>science;

        total = ctotal();
    }

    void Showdata()
    {
        cout<<"admno is: "<<admno<<endl;
        cout<<"sname is: "<<sname<<endl;
        cout<<"eng marks is: "<<eng<<endl;
        cout<<"math marks is: "<<math<<endl;
        cout<<"science marks is: "<<science<<endl;
        cout<<"total is: "<<total<<endl;
    }
};

int main()
{
    student a;
    a.Takedata();
    a.Showdata();
}