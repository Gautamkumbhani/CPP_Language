#include<iostream>
using namespace std;
class Intro
{
    char name[20],location[20],hobby[20];
    int qualification,family,age;
    public:
    Intro()
    {
        cout<<"default constructor is called.."<<endl;
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter your location: ";
        cin>>location;
        cout<<"enter your qualification: ";
        cin>>qualification;
        cout<<"enter your family: ";
        cin>>family;
        cout<<"enter your hobby: \n";
        cin>>hobby;
        cout<<"enter your age: \n";
        cin>>age; 
    }
    ~Intro()
    {
        cout<<"destructor is called.."<<endl;
    }

    void getdata()
    {
        cout<<"name is: "<<name<<endl;
        cout<<"location is: "<<location<<endl;
        cout<<"qualification is: "<<qualification<<endl;
        cout<<"family is: "<<family<<endl;
        cout<<"hobby is: "<<hobby<<endl;
        cout<<"age is: "<<age<<endl;
    }
};

int main()
{
    Intro a;
    a.getdata();

}