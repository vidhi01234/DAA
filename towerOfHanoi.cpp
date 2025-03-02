#include<iostream>
using namespace std;
void toh(int n,int s,int a,int d)
{
    if(n==0)return;
    toh(n-1,s,d,a);
    cout<<"Move"<<n<<"from"<<s<<"to"<<d<<endl;
    toh(n-1,a,s,d);
}
int main()
{
    int n;
    cout<<"Enter number";
    cin>>n;
    toh(n,1,2,3);
    return 0;
}
