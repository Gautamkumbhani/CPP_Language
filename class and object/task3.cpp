#include<iostream>
using namespace std;
class TEST
{
    int Testcode,NoCandidate,CenterReqd,NoCandidates,calc;
    string description;
    
    float CALCNTR()
        {
            return CenterReqd= (NoCandidates/100+1);
        }
    
    public:
    void SCHEDULE()
    {
        cout<<"enter TestCode: ";
        cin>>Testcode;
        cout<<"enter Description: ";
        cin>>description;
        cout<<"enter NoCandidate: ";
        cin>>NoCandidate;
        
        calc = CALCNTR();
    }
    void DISPTEST()
    {
        cout<<"TestCode is: "<<Testcode<<endl;
        cout<<"description is: "<<description<<endl;
        cout<<"NoCandidate is: "<<NoCandidates<<endl;
        cout<<"calc is: "<<calc<<endl;
    }
};

int main()
{
    TEST a;
    a.SCHEDULE();
    a.DISPTEST();
}