#include <iostream>
using namespace std;

class college
{
public:
college()
{
cout<<"You college is called"<<endl;
}
};

class ssn: public college
{
public:
    ssn()
    {
        cout<<"ssn college";
    }
};

int main()
{
college clg;
ssn snu;
return 0;
}
