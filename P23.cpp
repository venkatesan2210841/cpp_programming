#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void findchar(const string& text)
{
    int vow=0, conso=0, num=0, spl=0;
    for (char ch: text)
    {
        if (isalpha(ch))
        {
            char lower=tolower(ch);
            if(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u')
            {
                vow++;
            }
            else
            {
                conso++;
            }
        }
        else if (isdigit(ch))
        {
            num++;
        }
        else if(isspace(ch)){
            spl++;
        }
    }


    cout<<"vowels="<<vow;
    cout<<"consonants="<<conso;
    cout<<"digit="<<num;
    cout<<"spaces="<<spl;
}


int main()
{
    string input;
    cout<<"input string:"<<endl;
    getline(cin,input);

    findchar(input);
    return 0;
}
