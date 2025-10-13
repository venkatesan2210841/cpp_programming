#include <iostream>
using namespace std;
void merge(int arr1[],int m,int arr2[],int n,int n_arr[]);

int main()
{
    int m,n,k;
    int arr1[]={1,3,5,7,9};
    int arr2[]={0,2,3,4,6,8,10};
    m=sizeof(arr1)/sizeof(arr1[0]);
    n=sizeof(arr2)/sizeof(arr2[0]);
    k=m+n;
    int* n_arr=new int[k];
    merge(arr1,m,arr2,n,n_arr);
    delete[] n_arr;
    return 0;
}
void merge(int arr1[],int m,int arr2[],int n,int n_arr[])
{
    int i=0,j=0,idx=0;
    while (i<m && j<n)
    {
            if(arr1[i]<arr2[j])
            {
                n_arr[idx++]=arr1[i++];
            }
            else
            {
                n_arr[idx++]=arr2[j++];
            }
    }
    while (i<m)
    {
        n_arr[idx++]=arr1[i++];

    }
    while (j<n)
    {
        n_arr[idx++]=arr2[j++];

    }
    for (int l=0;l<idx;l++)
    {
        cout<<n_arr[l]<<" ";
        }
    }

