#include<iostream>
using namespace std;
void merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1,n2=r-mid,k;
    int left[n1],right[n2];
    k=0;
    for(int i=l;i<=mid;i++)
    {
        left[k++]=arr[i];
    }
    k=0;
    for(int i=mid+1;i<=r;i++)
    {
        right[k++]=arr[i];
    }
    int i=0,j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<n1){
        arr[k++]=left[i++];
    }
    while(j<n2){
        arr[k++]=right[j++];
    }
    //cout<<"Comparisons are:"<<c<<endl;
    //cout<<"Swaps are:"<<s;
}

void mergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
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
    mergeSort(arr,0,n-1);

    cout<<"sorted elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


