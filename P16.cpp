//Program to illustrates the use of Virtual base class.
/*
    person
    /   \
student teacher
    \   /
teaching assistant
*/

#include <iostream>
using namespace std;

class person
{
public:
void disp(){
cout<<"person"<<endl;
}
};

class student: virtual public person
{
public:

void studisp()
{
cout<<"student"<<endl;
}
};

class teachers: virtual public person
{
public:

void teadisp()
{
cout<<"teachers"<<endl;
}
};

class teachassistant: public teachers,public student
{
public:

void teachdisp()
{
cout<<"teaching assistant"<<endl;
}
};

int main()
{

teachassistant t4;
cout<<"teaching assistant can be call the previous derived class"<<endl;
t4.teachdisp();
t4.disp();
t4.studisp();
t4.teadisp();
teachers t3;
cout<<"teachers can be call the previous derived class not the derived class"<<endl;
t3.disp();
t3.teadisp();
student t2;
cout<<"students can be call the previous derived class not the derived class"<<endl;
t2.disp();
t2.studisp();
person t1;
cout<<"person is base class cant call derived class or even functions"<<endl;
t1.disp();
return 0;
}
