#include<iostream>
using namespace std;

void findTriplet(int arr[],int n)
{
    for(int k=2;k<n;k++)
    {
        int i=0,j=k-1;
        while(i<j)
        {
            int sum=arr[i]+arr[j];
            if(sum==arr[k]){
                cout<<"Indices: "<<i+1<<","<<j+1<<","<<k+1<<endl;
                return;
            }
            else if(sum<arr[k])
                i++;
            else
                j--;

        }
    }
    cout<<"no sequence found";
}
int main()
{
    int arr[10],n, target;
    cout<<"ENter range";
    cin>>n;
    cout<<"ENter elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    findTriplet(arr,n);

    return 0;
}

