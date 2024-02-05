#include <iostream>

using namespace std;

class Student
{
protected:
    int m1, m2, m3;
public:
    void input_marks(int m1, int m2, int m3)
    {
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }
};

class Total:public Student
{
protected:
    int sum;
public:
    void find_total()
    {
        sum = m1 + m2 + m3;
    }
};

class Result:public Total
{
protected:
    int percent;
public:
    void calc()
    {
        percent = (sum)/ 3;
        cout << "Percentage     :   " << percent << endl;
    }

};

int main()
{
    Result ob;
    ob.input_marks(70, 50, 70);
    ob.find_total();
    ob.calc();
    return 0;
}
