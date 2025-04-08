#include<iostream>
using namespace std;
int partition(int arr[],int l,int r)
{
    int pivot=arr[r],i=l,j=l-1;
    while(i<r)
    {
        if(arr[i]<pivot)
        {
            j++;
            swap(arr[j],arr[i]);
        }
        i++;
    }
    swap(arr[j+1],arr[r]);
    return j+1;
}

void quickSort(int arr[],int l,int r)
{
    if(l<=r)
    {
        int p=partition(arr,l,r);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,r);
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
    quickSort(arr,0,n-1);

    cout<<"sorted elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}



