#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Bank
{
    private:
    string name, type, ac;
    float bal;
    public:
    void getvalues()
    {
        cout<<"Enter the Name of the Depositor: ";
        getline(cin, name);
        cout<<"Enter the Account Number: ";
        getline(cin,ac);
        cout<<"Enter the Type of Account: ";
        cin>>type;
        cout<<"Enter the Balance Amount of the Account: ";
        cin>>bal;
    }
    void depositAmt(float x)
    {
        cout<<"\nAccount Number: "<<ac<<endl;
        cout<<"Amount Deposited: "<<fixed<<setprecision(2)<<x<<endl;
        printf("%0.2f",(bal+x));
        bal=bal+x;
    }
    void WithdrawAmt(float x)
    {
        cout<<"\nAccount Balance: "<<bal<<endl;
        if(bal>x)
        {
            cout<<"Amount Withdrawn: "<<fixed<<setprecision(2)<<x<<endl;
            cout<<"Balance: "<<fixed<<setprecision(2)<<(bal-x);
            bal=bal-x;
        }
        else
        cout<<"::Insufficient Balance::";
    }
    void display()
    {
        cout<<"\n\nName: "<<name<<endl;
        cout<<"Total Account Balance: "<<fixed<<setprecision(2)<<bal;
    }
};

int main()
{
    Bank obj;
    float x,y;
    obj.getvalues();
    cout<<"\n\nEnter the Amount to be Deposited: ";
    cin>>x;
    obj.depositAmt(x);
    cout<<"\n\nEnter the Amount to be Withdrawn: ";
    cin>>y;
    obj.WithdrawAmt(y);
    obj.display();
}