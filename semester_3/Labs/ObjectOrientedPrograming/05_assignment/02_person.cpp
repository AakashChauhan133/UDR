/*
 *  Author  :   Aakash Chauhan
 *  Date    :   September 16, 2023
 *  Common friend function
 */

 #include <iostream>

using namespace std;

class UserTwo;
class UserOne
{
private:
    string uname, pid;
public:
    void setData(string uname, string pid)
    {
        this->uname = uname;
        this->pid = pid;
    }
    void show()
    {
        cout << uname << endl << pid << endl;
    }
    friend void userChecker(UserOne, UserTwo);
};

class UserTwo
{
private:
    string uname, pid;
public:
    void setData(string uname, string pid)
    {
        this->uname = uname;
        this->pid = pid;
    }

    friend void userChecker(UserOne, UserTwo);
};

void userChecker(UserOne u1, UserTwo u2)
{
    if (!u1.uname.compare(u2.uname) && !u1.pid.compare(u2.pid) )
        cout << "Same Data" << endl;
    else
        cout << "Different Data" << endl;
}

int main()
{
    UserOne u1;
    UserTwo u2;
    u1.setData("name1", "12");
    u2.setData("name", "12");

    userChecker(u1, u2);

    return 0;
}
