#include <iostream>
using namespace std;

class BankAccount
{
    int accountNumber;
    string accountholderName;
    double balance;

public:
    BankAccount()
    {
        balance = 0.00;
    }
    void setName(string name){
        accountholderName = name;
    }
    void checkBal()
    {
        cout << balance << "\n";
    }
    void deposit(double y)
    {
        balance += y;
    }
    void withdrawal(double z)
    {
        if (z <= balance)
            balance -= z;
        else cout << "Insufficient Balance!\n";
    }
    void detailsofAccount()
    {
        cout << "the name of account holder:" << accountholderName << endl;
        cout << "the amount is : ";
        checkBal();
    }
};

int main()
{
    BankAccount B;
    B.setName("Krishna Keshav");
    B.detailsofAccount();
    B.withdrawal(4000.000);
    B.deposit(50000.86);
    B.withdrawal(4000.000);
    B.checkBal();
    
}