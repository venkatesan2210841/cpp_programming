#include <iostream>
#include <cstring>
#include "p1.h"
using namespace std;

struct student
{
    char name[50];
    char dept[50];
    float cgpa;
}series[MAX_STU];
int count=0;
void add()
{
    for(int i=0;i<MAX_STU;i++)
    {
        cout<<"enter student name:"<<"\n";
        cin>>series[i].name;
        cout<<"enter dept:"<<"\n";
        cin>>series[i].dept;
        cout<<"enter cgpa:"<<"\n";
        cin>>series[i].cgpa;
        count++;
    }

}

void print()
{
    for(int i=0;i<count;i++)
    {
        cout<<"student details:"<<"\n";
        cout<<"name:";
        cout<<series[i].name<<"\n";
        cout<<"dept:";
        cout<<series[i].dept<<"\n";
        cout<<"cgpa:";
        cout<<series[i].cgpa<<"\n";

    }
}
void remove()
{
    int index=-1;
    char target[50];
    cout<<"Enter the name to remove the student";
    cin>>target ;
    for (int i=0;i<count;i++)
    {
       if(strcmp(series[i].name,target)==0)
        {
        index=i;
        break;
       }
    }
    if (index==-1){
        cout<<"student not fount";
        return;
    }
    for (int i = index; i < count - 1; i++)
    {
        series[i] = series[i + 1];
    }

    count--;
    cout << "Student removed successfully.\n";

}
int main()
{
    cout << "Hello world!" <<"\n";
    cout<<"maximum students are:"<<"\n";
    cout<<MAX_STU<<"\n";
    add();
    print();
    char choice;
    cout << "\nDo you want to remove a student? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y')
    {
        remove();
        print();
    }
    cout<<"do you want to add any other student?(y/n):";
    cin>>choice;
    if (choice=='y' || choice =='Y')
    {
        add();
        print();
    }
    return 0;

}
