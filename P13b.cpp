#include <iostream>
using namespace std;

class numbers
{
public:

int i;
numbers(int x): i(x)
{
cout<<"the parameterised value is: "<<i<<endl;
}

numbers():i(0)
{
cout<<"the default value is: "<<i<<endl;
}

numbers(const numbers& num):i(num.i)
{
cout<<"the copy value is: "<<i<<endl;
}
};

int main()
{
numbers num(8);
numbers();
numbers(4);
numbers num1=num;

return 0;
}
