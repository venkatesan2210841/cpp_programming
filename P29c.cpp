#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    try
    {
        throw runtime_error("runtime error");
        throw 20;

        throw "exception of ";
        throw string("exception");

    }
    catch(string error)
    {
        cout<<error<<endl;
    }
    catch(int e)
    {
        cout<<e<<endl;
    }
    catch(const char *err)
    {

        cout<<err<<endl;
    }
    catch(...)
    {
        cout<<"Error ocored";
    }
    /*catch(runtime_error er)
    {
        cout<<er.what()<<endl;
    }*/
    return 0;

}
