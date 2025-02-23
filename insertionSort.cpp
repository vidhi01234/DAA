#include<iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
    int s=0,c=0;
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0)
        {
            c++;
            if(arr[j]>temp)
            {
                s++;
                arr[j+1]=arr[j];
                j--;
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
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
    insertionSort(arr,n);
    return 0;
}

