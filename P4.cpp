#include <iostream>


using namespace std;

int main()
{
    int i=0,j=0;
    int m=2,n=3;
    int a[2][3];
    int b[2][3];
    for (i=0;i<m;i++)
    {
        cout<<"your array1 size is 2X3"<<endl;
        cout<<"enter element by element in row"<<endl;
        for (j=0;j<n;j++)
        {
            cin>>a[i][j];

        }
    }
    for (i=0;i<m;i++)
    {
        cout<<"your array2 size is 2X3"<<endl;
        cout<<"enter element by element in row"<<endl;
        for (j=0;j<n;j++)
        {
            cin>>b[i][j];

        }
    }
    cout<<"your array1 "<<endl;
    cout<<"[";
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";

        }
        cout<<endl;
    }
    cout<<"]"<<endl;
    cout<<"your array2 "<<endl;
    cout<<"[";
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            cout<<b[i][j]<<"\t";

        }
        cout<<endl;
    }
    cout<<"]"<<endl;
    int c[2][3];
    cout<<"addition of two matrix: "<<endl;
    cout<<"["<<endl;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"]"<<endl;
    return 0;
}
