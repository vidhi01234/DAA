#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int v,e,s,d;
    cout<<"Enter total no.of vertices and edges";
    cin>>v>>e;
    vector<int>adj[v];
    for(int i=0;i<e;i++)
    {
        cin>>s>>d;
        adj[s].push_back(d);
        adj[d].push_back(s);
    }
    for(int i=0;i<v;i++)
    {
        cout<<"Node"<<i<<": ";
        for(int nums:adj[i])
        {
            cout<<nums<<" ";
        }
        cout<<endl;
    }
}
