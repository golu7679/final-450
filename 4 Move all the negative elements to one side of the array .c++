#include<iostream>
#include<algorithm>
using namespace std;
void rearrange(int arr[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        { 
            if(i!=j)
                swap(arr[i],arr[j]);
            j++;
        }
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = {0,-1,-2,-3,4,5,6,-7,-8,-9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    // rearrange(arr,n);
    // printarray(arr,n);
    sort(arr,arr+n);printarray(arr,n);
    return 0;
}