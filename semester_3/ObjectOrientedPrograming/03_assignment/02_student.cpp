#include <iostream>

using namespace std;

class student
{
private:
    string name, grade;
    int roll;
    double s1,s2,s3, per;
public:
    void inputInfo(string name, int roll, double s1, double s2, double s3)
    {
        student::name = name;
        student::roll = roll;
        student::s1 = s1;
        student::s2 = s2;
        student::s3 = s3;
    }
    void calcPer()
    {
        per = (s1 + s2 + s3)/3.;
        if (per >= 90)
            grade = "A";
        else if (per >= 80)
            grade = "B";
        else if (per >= 60)
            grade = "C";
        else if (per >= 40)
            grade = "D";
        else if (per < 40)
            grade = "F";
    }
    void displayInfo()
    {
        cout << "Name       : " << name << endl;
        cout << "Roll no.   : " << roll << endl;
        cout << "Percentage : " << per << "%" << endl;
        cout << "Grade      : " << grade << endl;
    }
};

int main()
{
    student st;
    string name;
    int roll;
    double s1, s2, s3;

    cout << "Enter the name         :    ";
    getline(cin, name);
    cout << "Enter the roll number  :    ";
    cin >> roll;
    cout << "Enter the marks of s1  :    ";
    cin >> s1;
    cout << "Enter the marks of s2  :    ";
    cin >> s2;
    cout << "Enter the marks of s3  :    ";
    cin >> s3;

    st.inputInfo(name, roll, s1, s2, s3);
    st.calcPer();
    st.displayInfo();

    return 0;
}
