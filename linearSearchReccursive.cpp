#include<iostream>
using namespace std;
int linearSearch(int arr [],int n,int i,int target)
{
    if(i==n)
        return -1;
    if(arr[i]==target)
        return 1;
    return linearSearch(arr,n,i+1,target);

}
int main()
{
    int arr[10],n, target;
    cout<<"ENter range";
    cin>>n;
    cout<<"ENter elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter target";
    cin>>target;
    int res=linearSearch(arr,n,0,target);
    if(res==1)
        cout<<"Element found";
    else
        cout<<"Element not found";
    return 0;
}

