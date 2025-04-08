#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i)
{
    int c1=2*i+1,c2=2*i+2,max=i;
    if(c1<n && arr[c1]>arr[max])
        max=c1;
    if(c2<n && arr[c2]>arr[max])
        max=c2;
    if(max!=i)
    {
        swap(arr[max],arr[i]);
        heapify(arr,n,max);
    }
}
void buildHeap(int arr[],int n)
{
    for(int i=n/2;i>=0;i--)
        heapify(arr,n,i);

    for (int i=n-1;i>0;i--)
    {
        swap(arr[0], arr[i]);  // Move max element to end
        heapify(arr, i, 0);    // Restore heap property
    }
}

int main()
{
    int arr[10],n;
    cout<<"ENter range";
    cin>>n;
    cout<<"ENter elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    buildHeap(arr,n);
     for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
