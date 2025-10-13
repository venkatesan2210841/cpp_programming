#include <iostream>
using namespace std;

class Student
{
public:
    char name[50];
    int reg_no;

    void getdata()
    {
        cout<<"enter the name:"<<endl;
        cin>>name;
        cout<<"enter roll no: "<<endl;
        cin>>reg_no;

    }
    void disp_data()
    {
        cout<<name<<endl;
        cout<<reg_no<<endl;
    }
};

int main()
{
    const int n=5;
    Student credentials[n];
    for (int i=0;i<n;i++)
    {
        credentials[i].getdata();
        credentials[i].disp_data();
    }
    return 0;
}
