#include <iostream>
#define     MAX     5

using namespace std;

class bank
{
private:
    string name, address;
    int acc_number, balance;
public:
    void inputInfo(string name, string address, int acc_number, int balance)
    {
        bank::name = name;
        bank::address = address;
        bank::acc_number = acc_number;
        bank::balance = balance;
    }
    void display()
    {
        cout << "Name           : " << name << endl;
        cout << "Account no.    : " << acc_number << endl;
        cout << "Address        : " << address << endl;
        cout << "Balance        : " << balance << endl;
    }
    void add_amount (int val)
    {
        balance += val;
        cout << ">>>>>> Rs." << val << " Credited" << endl;
        cout << ">>>>>> Available balance Rs." << balance << endl;
    }
    void withdraw(int val)
    {
        if (balance < val)
        {
            cout << ">>>>>> Insufficient balance" << endl;
            return;
        }
        balance -= val;
        cout << ">>>>>> Rs." << val << " Debited" << endl;
        cout << ">>>>>> Available balance Rs." << balance << endl;
    }
    void changeAddress(string address)
    {
        bank::address = address;
    }
    int getAccount()
    {
        return acc_number;
    }
};

int getUser(bank dep[], int user)
{
    int acc_number, i, f = 0;
    cout << "Enter the account number       :    ";
    cin >> acc_number;
    for (i = 0; i < user; i++)
    {
        if (dep[i].getAccount() == acc_number)
        {
            f = 1;
            break;
        }
    }
    if (!f)
    {
        cout << ">>>>>> Depositor not found" << endl;
        return -1;
    }
    return i;
}

int main()
{
    string name, address;
    int ch, balance, i, amt, acc_number = 1000, user;
    bank dep[MAX];

    user = 0;

    while(ch)
    {
        cout << "******** CURRUPT BANK ********" << endl;
        cout << "[1] Add new depositor" << endl;
        cout << "[2] View depositor Info" << endl;
        cout << "[3] Add amount" << endl;
        cout << "[4] Withdraw amount" << endl;
        cout << "[5] Change address" << endl;
        cout << "[6] exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the name of depositor    :    ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter the address of depositor :    ";
            getline(cin, address);
            cout << "Enter the starting balance     :    ";
            cin >> balance;
            dep[user].inputInfo(name, address, ++acc_number, balance);
            user++;
            break;
        case 2:
            i = getUser(dep, user);
            if (i > -1)
                dep[i].display();
            break;
        case 3:
            i = getUser(dep, user);
            if (i > -1)
            {
                cout << "Enter the amount : ";
                cin >> amt;
                dep[i].add_amount(amt);
            }
            break;
        case 4:
            i = getUser(dep, user);
            if (i > -1)
            {
                cout << "Enter the amount : ";
                cin >> amt;
                dep[i].withdraw(amt);
            }
            break;
        case 5:
            i = getUser(dep, user);
            if (i > -1)
            {
                cout << "Enter the new address : ";
                cin.ignore();
                getline(cin, address);
                dep[i].changeAddress(address);
            }
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "Invalid Input" << endl;
        }
        cout << "Enter 0 to exit and 1 to continue ..."<< endl;
        cin >> ch;
    }

    return 0;
}
