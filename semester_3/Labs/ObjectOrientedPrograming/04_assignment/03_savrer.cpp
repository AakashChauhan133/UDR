/*
 *  Author  :   Aakash Chauhan
 *  Date    :   September 9, 2023
 *  Add two times
 */

#include <iostream>

using namespace std;

class SavingAccount
{
private:
    static double annualInterestRate;
    double savingsBalance;

public:
    SavingAccount(int savingsBalance)
    {
        this->savingsBalance = savingsBalance;
    }
    void calculateMonthlyInterest ()
    {
        savingsBalance += savingsBalance*annualInterestRate/12;
        cout << savingsBalance << endl;
    }

    static void modifyInterestRate(int val)
    {
        annualInterestRate = val;
    }

};
double SavingAccount::annualInterestRate = 0;

int main()
{
    SavingAccount saver1(2000), saver2(3000);
    SavingAccount::modifyInterestRate(4);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    SavingAccount::modifyInterestRate(5);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    return 0;
}


