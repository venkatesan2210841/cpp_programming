//Program to illustrate Abstract Base Class.
#include <iostream>
using namespace std;

class animal
{
public:
    virtual void speak()=0;
/*    {
        cout<<"animal speaks"<<endl;
    }
*/
    void info()
    {
        cout << "This is a animal." << endl;
    }};

class monkey: public animal
{
public:

    void speak() override
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
    ptr=&monky;
    ptr->info(); //assigning the address of object to the pointer
    ptr->speak();
    cout<<ptr<<endl;
    ptr=&ct;
    ptr->info();
    ptr->speak();
    cout<<ptr<<endl;

    return 0;
}
