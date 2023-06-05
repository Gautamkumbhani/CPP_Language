#include<iostream>
using namespace std;
class result
{
    public:
    int Maths,English,Science,total,Rollno;
    float per;
    char grade;
    void setdata()
    {
        cout<<"Enter Roll no:";
        cin>>Rollno;

        cout<<"Enter Maths:";
        cin>>Maths;

        cout<<"Enter English:";
        cin>>English;

        cout<<"Enter Science:";
        cin>>Science;
    }
    void clac()
    {
        total=Maths+English+Science;
        per=total/3;

        if (Maths<=32 || Science<=32 || English<=32)
        {
            grade = 'F';
        }
        else if(per>=90 && per<=100)
        {
            grade = 'A';
        }
        else if(per>=70 && per<=89)
        {
            grade =  'B';
        }
        else if(per>=55 && per<=69)
        {
            grade = 'C';
        }
        else if(per>=54 && per<=33)
        {
            grade  = 'D';
        }
        else{
            grade = 'F';
        }
        
    }

    void getdata()
    {
        cout<<"Rollno\t"<<"Maths\t"<<"English\t"<<"Science\t"<<"total\t"<<"per\t"<<"grade\n";
        cout<<Rollno<<"\t"<<Maths<<"\t"<<English<<"\t"<<Science<<"\t"<<total<<"\t"<<per<<"\t"<<grade;
    }           
};
int main()
{
    result a;
    a.setdata();
    a.clac();
    a.getdata();
}