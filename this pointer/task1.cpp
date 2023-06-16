#include<iostream>
using namespace std;
class Bankaccount
{
    private:
    double balance;
    
    public:
    Bankaccount ()
    {
        balance = 1500;
    }
    void addmoney(double amount)
    {
        balance += amount;
    }
    void withdrawmoney(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout<<"insufficient balance."<<endl;
        }
    }
    void showbalance()
    {
        cout<<"current balance:"<<balance<<endl;
    }    
    void exit()
    {
        cout<<"exit the programm."<<endl;
    }
        
};

int main()
{
    Bankaccount a;

    int choice;
    double amount;

    while (choice!=4) {
        cout << "1. Add money\n2. Withdraw money\n3. Show balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the amount to add: ";
                cin >> amount;
                a.addmoney(amount);
                break;

            case 2:
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                a.withdrawmoney(amount);
                break;

            case 3:
                a.showbalance();
                break;

            case 4:
            break;
            default:
                cout<<"wrong choise"<<endl;
            break;

            
        }
    
    }
}