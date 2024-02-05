/*
    Name        :   Aakash
    Roll Number :   2021931
 */

#include <iostream>
using namespace std;

class SavingsAccount
{
private:
    int savingsBalance;
public:
    SavingsAccount(int x)
    {
        // constructor
        savingsBalance = x;
    }
    static int annualInterestRate ;
    int calculateMonthlyInterest()
    {
        // store savingbalance
        savingsBalance += (savingsBalance * annualInterestRate)/12;
        return (savingsBalance * annualInterestRate)/12;
    }
    static void modifyInterestRate(int x)
    {
        annualInterestRate = x;
    }
    void show()
    {
        cout << "Balance : " << savingsBalance << endl;

    }
};
int SavingsAccount::annualInterestRate  = 4;
int main()
{
    int x;
    // Input section
    cout << "   ***** INPUT *****" << endl;
	cout<<"Saver 1 balance: ";
	cin >> x;
	SavingsAccount s1(x);
	cout<<"Saver 2 balance: ";
	cin >> x;
	SavingsAccount s2(x);
    // Output section
    cout << "   ***** OUTPUT AFTER 4%*****" << endl;
    cout << "saver 1" << endl << "Before cal: ";
    s1.show();
    s1.calculateMonthlyInterest();
    cout << "After cal: " ;
    s1.show();
    cout << endl;
    cout << "saver 2" << endl << "Before cal: ";
    s2.show();
    s2.calculateMonthlyInterest();
    cout << "After cal: " ;
    s2.show();



    s1.modifyInterestRate(5);

    cout << "   ***** OUTPUT AFTER 5%*****" << endl;
    cout << "saver 1" << endl << "Before cal: ";
    s1.show();
    s1.calculateMonthlyInterest();
    cout << "After cal: " ;
    s1.show();
    cout << endl;
    cout << "saver 2" << endl << "Before cal: ";
    s2.show();
    s2.calculateMonthlyInterest();
    cout << "After cal: " ;
    s2.show();


	return 0;
}
