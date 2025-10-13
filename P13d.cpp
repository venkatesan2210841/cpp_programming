//d. Parameterized constructor with Dynamic initialization #include <iostream>
using namespace std;

class area
{
int *l;
int *b;
public:
//dynamic initialisation
area(int len, int brth)
{
l=new int(len);
b=new int(brth);
cout<<"area is "<<(*l)*(*b)<<endl;
}
~area()
{
    delete l;
    delete b;
}
};

int main()
{
area a1(2,3);
area a2(3,5);
return 0;
}
