//Write a program to use function pointers
//to call callbacks in asynchronous way.

#include <iostream>
#include <thread>//multithreading
#include <chrono> //time related utilities: clocks, duration and timepoint
using namespace std;

typedef void(*callback)(int);//defining a datatype

void printnum(int num)
{
    cout<<"the num is "<<num<<endl;
}

void asynchronous(int value,callback cb)
{
    //this_thread will point to current thread
    cout<<value<<endl;
    this_thread::sleep_for(chrono::seconds(5));//sleep_for is to pause
    int num=value*10;
    cb(num);
}

int main()
{
    int n=7;
    thread asynch(asynchronous,n,printnum);//asynch ->thread, Asynchronous ->thread fi=unction and other two parameters
    cout<<"waiting for result"<<endl;
    asynch.join();//wait for asynch thread to finish
    return 0;
}
