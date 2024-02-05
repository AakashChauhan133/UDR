/*
    Name        :   Aakash
    Roll Number :   2021931
 */

#include <iostream>
using namespace std;

class UserTwo;
class UserOne
{
private:
    string uname, fname, mname, gender;
public:
    void setData(string uname, string fname, string mname, string gender)
    {
        this->uname = uname;
        this->fname = fname;
        this->gender = gender;
        this->mname = mname;
    }
    void show()
    {
        cout << endl << "USER 1" << endl;
        cout << "Name   :" << uname << endl;
        cout << "Father :" << fname << endl;
        cout << "Mother :" << gender << endl;
        cout << "Gender :" << mname << endl;
    }
    friend void userChecker(UserOne, UserTwo);
};

class UserTwo
{
private:
    string uname, fname, mname, gender;
public:
    void setData(string uname, string fname, string mname, string gender)
    {
        this->uname = uname;
        this->fname = fname;
        this->gender = gender;
        this->mname = mname;
    }
    void show()
    {
        cout << endl << "USER 2" << endl;
        cout << "Name   :" << uname << endl;
        cout << "Father :" << fname << endl;
        cout << "Mother :" << gender << endl;
        cout << "Gender :" << mname << endl;
    }

    friend void userChecker(UserOne, UserTwo);
};

void userChecker(UserOne u1, UserTwo u2)
{
    cout << endl;
    if (!u1.fname.compare(u2.fname) && !u1.mname.compare(u2.mname) )
    {
        cout << "Belongs to Same Family" << endl;
        if(!u1.gender.compare("m") && !u2.gender.compare("m"))
            cout << "We are Brothers" << endl;
        else if ((!u1.gender.compare("m") && !u2.gender.compare("f") ) || (!u1.gender.compare("f") && !u2.gender.compare("m")))
            cout << "We are brother and sister" << endl;
        else if (!u1.gender.compare("f") && !u2.gender.compare("f"))
            cout << "We are Sisters" << endl;
    }

    else
        cout << "Belongs to different Family" << endl;
}

int main()
{
    cout << " ******* OUTPUT ****** " << endl;
    UserOne u1;
    UserTwo u2;
    u1.setData("name1", "father1", "mother1", "m");
    u2.setData("name2", "father1", "mother1", "m");
    u1.show();
    u2.show();
    cout << " ******* OUTPUT ****** " << endl;
    userChecker(u1, u2);
    u1.setData("name1", "father1", "mother1", "f");
    u2.setData("name2", "father1", "mother1", "m");
    u1.show();
    u2.show();
    cout << " ******* OUTPUT ****** " << endl;
    userChecker(u1, u2);
    u1.setData("name1", "father2", "mother2", "f");
    u2.setData("name1", "father1", "mother1", "m");
    u1.show();
    u2.show();
    userChecker(u1, u2);

    return 0;
}

