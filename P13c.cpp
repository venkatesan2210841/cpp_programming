/*Copy constructor
2 types : compiler generated/default constructor---Shallow copy--number wise copy
there are same address for obj 1 and obj2; when obj 2 is updated obj 1 also update

        : user defined constructor --deep copy */
#include <iostream>
using namespace std;

class A
{
public:
    int x;
    int *p;
    //default constructor--shallow copy
    A()
    {
        x=5;
        p=new int(5);
    }
    //user defined constructor--deepcopy
    A(const A &obj)
    {
        x=obj.x;
        p=new int;
        *p=*obj.p;
    }
};

int main()
{
    A obj1;
    A obj2(obj1);
    cout<<obj1.x<<endl;
    cout<<*obj1.p<<endl;
    cout<<obj2.x<<endl;
    cout<<* obj2.p<<endl;

    obj1.x=10;
    *obj1.p=10;
    cout<<obj1.x<<endl;
    cout<<*obj1.p<<endl;
    cout<<obj2.x<<endl;
    cout<<* obj2.p<<endl;
    return 0;
}
