/*
    Name        :   Aakash
    Roll Number :   2021931
 */

#include<iostream>
using namespace std;

class Base
{
private:
    int a;
public:
    int b;
    Base(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void disp1ay()
    {
        cout<<"Value a :"<<a<<endl;
        cout<<"Value b :"<<b<<endl;
        cout<<"Value c :"<<c<<endl;
    }
protected:
    int c;
};
class SubA:private Base
{
public:
    SubA(int a,int b,int c):Base(a,b,c)
    {
    }
};
class SubB:public Base
{
public:
    SubB(int a,int b,int c):Base(a,b,c)
    {
    }
};
class SubC:protected Base
{
public:
    SubC(int a,int b,int c):Base(a,b,c)
    {
    }
};
int main()
{
    SubA ob1(1,2,3);
    SubB ob2(4,5,6);
    SubC ob3(7,8,9);
    cout<<"\t\t******OUTPUT******\n";

    //ob1.disp1ay();
    ob2.disp1ay();
    // ob3.disp1ay();
}

