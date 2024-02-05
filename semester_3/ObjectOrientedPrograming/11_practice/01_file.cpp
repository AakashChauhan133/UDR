#include <iostream>
#include <fstream>

using namespace std;



int main()
{
    ifstream fin;
    fin.open("01_file.txt");
    string ch;

    if (!fin)
    {
        cout << "No file" << endl;
        return 1;
    }

    while (!fin.eof())
    {
        getline(fin, ch);
        cout << ch << endl;
    }

    fin.close();

    return 0;
}
