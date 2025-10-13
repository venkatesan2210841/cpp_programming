//find largest elemnt in an array
#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,3,15,3,4,2,6,8,9,13,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"sizde of array: "<<n<<endl;
    int l_elmt=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]>l_elmt)
        {
            l_elmt=arr[i];
        }
    }
    cout<<"the largest element in array: "<<l_elmt<<endl;
    return 0;
}

