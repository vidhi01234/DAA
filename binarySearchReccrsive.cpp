#include<iostream>
using namespace std;
int bsearch(int arr [],int lb,int ub,int target)
{
    if(lb<=ub)
    {
        int mid=lb+(ub-lb)/2;
        if(arr[mid]==target)
            return 1;
        else if(arr[mid]>target)
            return bsearch(arr,lb,mid-1,target);
        else
            return bsearch(arr,mid+1,ub,target);
    }
    return -1;
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
    int res=bsearch(arr,0,n,target);
    if(res==1)
        cout<<"Element found";
    else
        cout<<"Element not found";
    return 0;
}
