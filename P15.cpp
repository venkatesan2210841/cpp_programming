//Program to illustrate the use of pure virtual function in Polymorphism.
#include <iostream>
using namespace std;

class animal
{
public:
    virtual void speak()=0;//pure virtual function implemented
/*    {
        cout<<"animal speaks"<<endl;  //no function declared in the base class
    }                                  //acts a sa abstract class
*/
};

class monkey: public animal
{
public:

    void speak() override//it is necessay to override the function
    {
        cout<<"monkeys screamed"<<endl;
    }
};
class cat: public animal
{
public:

    void speak() override
    {
        cout<<"cat meows"<<endl;
    }
};

int main()
{
    animal* ptr;//ptr is a pointer that points to the object of animal or derived class
    monkey monky;//cretaing objects
    cat ct;
    cout<<ptr<<endl;
    ptr=&monky; //assigning the address of object to the pointer
    ptr->speak();
    cout<<ptr<<endl;
    ptr=&ct;
    ptr->speak();
    cout<<ptr<<endl;

    return 0;
}
