//Program to demonstrate run-time polymorphism.

#include <iostream>
using namespace std;

class shape
{
public:
 virtual void print()//but not necessary
    {
        cout<<"parent class";
    }
};

class rectangle: public shape
{
public:

    void print() override//but not necessary
    {
        cout<<"child class";
    }
};

int main()
{
rectangle s1;
shape* ptr=&s1;
ptr->print();
return 0;
}
