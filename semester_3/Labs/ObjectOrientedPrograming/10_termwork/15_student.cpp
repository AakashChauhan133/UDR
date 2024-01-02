/*
    Name        :   Aakash
    Roll Number :   2021931
 */
#include<iostream>
using namespace std;
class Student
{
    protected:
        string name;
        int age,enroll,marks;
    public:
        void display()
        {
            cout<<"Name         :"<<name<<endl;
            cout<<"Age          :"<<age<<endl;
            cout<<"Enroll No.   :"<<enroll<<endl;
            cout<<"Marks        :"<<marks<<endl;
        }
};
class Faculty
{
    protected:
        string fname,dept,gender;
        int fcode,age,exp;
        float salary;
    public:
        void display()
        {
            cout<<"Name         :"<<fname<<endl;
            cout<<"Age          :"<<age<<endl;
            cout<<"Gender       :"<<gender<<endl;
            cout<<"Code         :"<<fcode<<endl;
            cout<<"Department   :"<<dept<<endl;
            cout<<"Experience   :"<<exp<<endl;
            cout<<"Salary       :"<<salary<<endl;
        }
};
class Person:public Student,public Faculty
{
    public:
        void input()
        {
            cout<<"Enter info of Student " << endl;
            cout<<"Enter Name         :";
            getline(cin,name);
            cout<<"Enter Age          :";
            cin>>Student::age;
            cout<<"Enter Enroll No.   :";
            cin>>enroll;
            cout<<"Enter Marks        :";
            cin>>marks;
            cout<< endl << "Enter Faculty's Information" << endl;
            cout<<"Enter Name                   :";
            cin.ignore();
            getline(cin,fname);
            cout<<"Enter Age                    :";
            cin>>Faculty::age;
            cout<<"Enter Gender :";
            cin.ignore();
            getline(cin,gender);
            cout<<"Enter Code                   :";
            cin>>fcode;
            cout<<"Enter Department             :";
            cin.ignore();
            getline(cin,dept);
            cout<<"Enter Experience             :";
            cin>>exp;
            cout<<"Enter Salary                 :";
            cin>>salary;
        }
};

int main()
{
    Person ob;
    // Input section
    cout<<"     ******INPUT******" << endl;
    ob.input();

    // Output with calling functions from different classes
    cout<<"     ******OUTPUT******" << endl;
    cout << "Calling student's display" << endl;
    ob.Student::display();
    cout << "Calling faculty's display" << endl;
    ob.Faculty::display();
}


