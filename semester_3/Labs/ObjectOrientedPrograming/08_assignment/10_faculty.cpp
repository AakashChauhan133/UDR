#include <iostream>

using namespace std;

class Student
{
protected:
    int age, enroll_no, marks;
    string name
public:
    void show()
    {
        cout << "Name       :   " << name << endl;
        cout << "Enroll no  :   " << enroll_no << endl;
        cout << "Marks      :   " << marks << endl;
    }

};
class Faculty
{
protected:
    string facultyName, dept, gender;
    int facultycode, salary, age, experience;
public:
    void show()
    {
        cout << "Name       :   " << facultyName << endl;
        cout << "Department :   " << dept << endl;
        cout << "Gender     :   " << gender << endl;
        cout << "Code       :   " << facultycode << endl;
        cout << "Salary     :   " << salary << endl;
        cout << "Age        :   " << age << endl;
        cout << "Experience :   " << experience << endl;
    }
};

class Person: public Faculty, public Student
{

};

int main()
{

    return 0;
}
