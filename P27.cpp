// Write a program to use function pointers to call callbacks in synchronous way.

#include <iostream>
using namespace std;

//typedef void (*callback)(int);

void printcube(int x)
{
    cout<<"the cube is "<<x*x*x<<endl;
}

void printquarter(int x)
{
    cout<<"the quarter value is "<<x/4<<endl;
}

/*void printfunction(int value, callback cb)
{
    cout<<"the value is "<<value<<endl;
    cb(value);
}*/
void printfunction(int value, void (*callback)(int))
{
    cout<<"the value is "<<value<<endl;
    callback(value);
}

int main()
{
    int n=8;
    printfunction(n,printcube);
    printfunction(n,printquarter);
    return 0;
}
