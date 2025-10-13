//array of function pointer

#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout<<"add "<<a+b<<endl;
}
void sub(int a, int b)
{
    cout<<"sub "<<a-b<<endl;
}
void mul(int a, int b)
{
    cout<<"mul "<<a*b<<endl;
}
void divide(int a, int b)
{
    cout<<"div "<<a/b<<endl;
}

int main()
{
    int ch,a,b;
    void (*arrptr[4])(int,int)={add,sub,mul,divide};
    cout<<"enter the choice "<<endl;
    cout<<"0 for add,1 for sub,2 for mul,3 for div"<<endl;
    cin>>ch;
    cout<<"enter the two number "<<endl;
    cin>>a;
    cin>>b;
    (*arrptr[ch])  (a,b);
    return 0;
}
