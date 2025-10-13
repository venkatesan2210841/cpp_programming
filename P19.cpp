#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

string replacename(string line,const string& oldword,const string& newword)
{
    size_t pos=0;
    while ((pos=line.find(oldword,pos))!= string::npos)
    {
        line.replace(pos,oldword.length(),newword);
        pos+=newword.length();
    }
    return line;
}

int main()
{
    string filename, o_word,n_word;
    cout<<"enter the path"<<endl;
    cin>>filename;
    cout<<"enter teh word to find"<<endl;
    cin>>o_word;
    cout<<"enter replace word"<<endl;
    cin>>n_word;

    ifstream infile(filename);
    ofstream outfile("temp.txt");

    if (!infile|| !outfile)
    {
        cout<<"error"<<endl;
        return 1;
    }

    string line;
    while (getline(infile, line))
    {
        line=replacename(line,o_word,n_word);
        outfile<<line<<endl;

    }
    infile.close();
    outfile.close();


    remove(filename.c_str());
    rename("temp.txt",filename.c_str());

    return 0;


}
