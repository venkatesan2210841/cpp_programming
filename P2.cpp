#include <iostream>
using namespace std;
// Write a program to delete all duplicate elements from an array.

int main()
{

    //to compute size
    int n;
    cout<<"enter the size array of elemnts:"<<endl;
    cin>>n;
    int* arr=new int[n];
    //to get all elememts
    cout<<"enter the"<<" "<<n<<" "<<"elements"<<endl;
    for (int x=0;x<n;x++){
        cin>>arr[x];
    }
    cout<<"you entered"<<endl;
    cout<<"[";
    for (int x=0;x<n;x++)
    {
        cout<<arr[x]<<" ";
    }
    cout<<"]"<<endl;
    //int size=sizeof(arr)/sizeof(arr[0]);
    int* newarr=new int[n];
    int idx=0;

    for (int i=0;i<n;i++)
    {
        bool isdup=false;
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j]){
                isdup=true;
                break;
            }
        }
        if (!isdup)
            {
                newarr[idx++]=arr[i];

            }
        }
        cout<<"the new array w/o duplicates:"<< "[";
        for(int k=0;k<idx;k++)
                    {
                        cout<< newarr[k]<<" ";
                        }
        cout<<"]";

        delete[] arr;
        delete[] newarr;


        return 0;

}
