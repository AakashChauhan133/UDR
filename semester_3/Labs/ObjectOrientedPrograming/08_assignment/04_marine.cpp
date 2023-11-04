#include <iostream>

using namespace std;

class Mammals
{
public:
    void statusm()
    {
        cout << "I am mammal" << endl;
    }
};

class MarineAnimals
{
public:
    void statusma()
    {
        cout << "I am marine animal" << endl;
    }


};

class BlueWhale:public Mammals, public MarineAnimals
{
public:
    void statusw()
    {
        cout << "Belongs to both" << endl;
    }

};

int main()
{
    Mammals obm;
    MarineAnimals obma;
    BlueWhale obw;

    obm.statusm();
    obma.statusma();
    obw.statusw();
    obw.statusm();
    obw.statusma();

    return 0;
}
