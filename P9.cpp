#include <iostream>
using namespace std;

class fruits
{
public:
    fruits()
    {

        cout<<"constructor is called"<<endl;
    }
    virtual ~fruits()
    {
        cout<<"Destructor is called"<<endl;
    }
};

class dryfruits: public fruits
{
public:
    dryfruits()
    {
        cout<<"dry constructor is created"<<endl;

    }
     ~dryfruits()
    {
        cout<<"dry destructor is created"<<endl;
    }
};

class raisins:public dryfruits
{
public:
    raisins()
    {
        cout<<"raisins constructor is created"<<endl;

    }
    ~raisins()
    {
        cout<<"raisins destructor is created"<<endl;
    }
};

int main()
{
    cout<<"main function"<<endl;
    fruits* ptr=new raisins;
    cout<<"main ends"<<endl;
    delete ptr;
    cout<<"main ends last"<<endl;
    return 0;
}

//virtual keyboard used sfor the base class
//ofget desructor of the derived of base
