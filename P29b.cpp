#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int a=10,b=0;
    try
    {
        if (b==0)
        {
            throw runtime_error("cant divide");
            int c=a/b;
            cout<<c<<endl;
        }
    }
    catch(runtime_error &e)
    {
        cout<<"error"<<endl;
        cout<<e.what();
    }

    return 0;
}
