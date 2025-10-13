#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string filename;
    cout<<"enter teh filename"<<endl;
    cin>>filename;
//file name input
    ifstream infile(filename);
    if (!infile)
    {
        cout<<"error infile";
    }

    int line_del;
    cout<<"enter thr line "<<endl;
    cin>>line_del;
//line to delete
    ofstream temp("temp.txt");
    if (!temp)
    {
        cout<<"error temp";
    }
    int startline=1;
    int l_dted=false;
    string line;

    while(getline(infile, line))
    {
        if (startline!=line_del)
        {
            temp<<line<<endl;

        }
        else
        {
            l_dted=true;
        }
        startline++;
    }
    infile.close();
    temp.close();
    remove(filename.c_str());
    rename("temp.txt", filename.c_str());
}
