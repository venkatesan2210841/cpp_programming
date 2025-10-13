#include <iostream>
using namespace std;

class calculate
{
public:
    calculate()
    {
        int a=0;
        cout<<a<<endl;
    }
    calculate(int a)
    {
        cout<<a<<endl;
    }
    calculate (int a,int b)
    {
        cout<<a+b<<endl;
    }
    calculate (int a , int b, int c)
    {
        cout<<a+b+c<<endl;

    }
};

int main()
{
    calculate cal;
    calculate(4);
    calculate(4,5);
    calculate(3,4,5);
    calculate cal2(3,5);
    return 0;
}
