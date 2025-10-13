#include <iostream>
using namespace std;

int main()
{
    try{
    int *arr=new int[100000000000];
    arr[0]=24;
    cout<<"first element"<<endl;
    delete[] arr;
}
    /*catch(const bad_alloc& e)
    {
        cout<<"exception occured"<<e.what()<<endl;
    }*/
    catch(...)
    {
        cout<<"error occured"<<endl;
    }


    return 0;
}


