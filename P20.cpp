#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string filename;
    cout<<"enter the filename: "<<endl;
    cin>>filename;

    ifstream file(filename);
    if (!file)
        {
            cout<<"error"<<endl;
            return 1;
        }

    int w_count=0;
    int ch_count=0;

    char ch;
    string word;

    while (file.get(ch))
    {
        ch_count++;
    }
    file.clear();
    file.seekg(0,ios::beg);

    while (file>> word)
    {
        w_count++;
    }
    cout << "Total characters: " << ch_count << endl;
    cout << "Total words: " << w_count << endl;
    file.close();
    return 0;
}
