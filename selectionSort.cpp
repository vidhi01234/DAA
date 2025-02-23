#include<iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
    int s=0,c=0;
    for(int i=0;i<n-1;i++)
    {
        int minn=i;
        for(int j=i+1;j<n;j++)
        {
            c++;
            if(arr[minn]>arr[j])
            {
                minn=j;

            }
        }
        if(i!=minn)
        {
            swap(arr[minn],arr[i]);
            s++;
        }
    }
    cout<<"sorted elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Comparisons are:"<<c<<endl;
    cout<<"Swaps are:"<<s;
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
    selectionSort(arr,n);
    return 0;
}

