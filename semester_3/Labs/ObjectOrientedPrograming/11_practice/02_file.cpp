#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ifstream fn;
    ofstream fout;
    fout.open("01_file.txt");
    string name;
    int eid;
    string line;
    int ans=1;
    while(ans==1)
    {
        cout<<"Enter name ";
        getline(cin,name);
        cout<<"Enter Eid ";
        cin>>eid;
        fout<<name<<" ";
        fout<<eid<<" "<<endl;
        cout<<"want to continue press 1";
        cin>>ans;
        cin.ignore();
    }
    fout.close();
    fn.open("d:/emp.txt");
    while(!fn.eof())
    {
        getline(fn,line);
        cout<<line<<endl;
    }
    fn.close();
    return 0;
}
