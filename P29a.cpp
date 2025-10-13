#include <iostream>

#include <stdexcept>
using namespace std;

void test()
{
    throw runtime_error{"error"};

}
int main()
{
    try
    {
        test();
    }
    catch(int e)
    {
        cout<<"integer tyoe"<<e<<endl;
    }
    catch(char c)
    {
        cout<<"character tyoe"<<c<<endl;
    }
     catch(runtime_error& r)
    {
        cout<<"runtime tyoe"<<r.what()<<endl;
    }
    return 0;
}
