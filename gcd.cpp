#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    cout<<"ENter numbers";
    cin>>a>>b;
    int res=gcd(a,b);
    cout<<"Gcd is: "<<res;
    return 0;
}
