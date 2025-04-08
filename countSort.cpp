#include<iostream>
using namespace std;

void countSort(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
        if(arr[i]>max)max=arr[i];  //for finding maximum

    int freq[10]={0};
    for(int i=0;i<n;i++)
        freq[arr[i]]++;            //count frequency

    for(int i=1;i<=max;i++)
        freq[i]=freq[i]+freq[i-1];  //add frequencyy

    int sol[10];
    for(int i=n-1;i>=0;i--)
    {
        sol[freq[arr[i]]-1]=arr[i];
        freq[arr[i]]--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<sol[i]<<" ";
    }

}
int main()
{
    int arr[10],n, target;
    cout<<"ENter range";
    cin>>n;
    cout<<"ENter elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    countSort(arr,n);

    return 0;
}
