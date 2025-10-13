#include <iostream>
//#include <string>
using namespace std;

class subject
{
public:
int i;

void init(int x)
{
i=x;
}
void disp()
{
    cout<<"the value is: "<<i<<endl;
}

subject(const subject &s)
{
    i=s.i;
    cout<<"the copied value is: "<<i<<endl;
}
subject(){};
};

int main()
{
subject sub1;
sub1.init(4);
sub1.disp();
subject sub2=sub1;
sub2.disp();
return 0;


}
