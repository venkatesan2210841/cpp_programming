#include <iostream>
#include <string.h>
using namespace std;


class equals
{
public:
string str;
void getdata()
{
cout<<"enter the string"<<endl;
cin>>str;
}
bool operator==(equals st)
{
return(str.compare(st.str)==0);

}
};

int main()
{
equals str1,str2;
str1.getdata();
str2.getdata();
if (str1==str2)
    cout<<"strings are equal";
else
    cout<<"strings are not equal";
return 0;
}
