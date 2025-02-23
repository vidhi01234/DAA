#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int sCount=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                sCount++;
            }
        }
        if(sCount==0)
            break;
    }
    cout<<"sorted elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int i,arr[10],n;
    cout<<"Enter Range";
    cin>>n;
    cout<<"Enter Elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    return 0;
}
