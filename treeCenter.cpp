#include<iostream>
#include<vector>
using namespace std;

void center(vector<int> tree[],int v)
{
    int degree[v];
    vector<int> leaves;
    for(int i=0;i<v;i++)
    {
        degree[i]=tree[i].size();
        if(degree[i]==0 || degree[i]==1)
        {
            leaves.push_back(i);
            degree[i]=0;
        }
    }
    int count=leaves.size();
    while(count<v)
    {
        vector<int> new_leaves;
        for(auto node: leaves)
        {
            for(auto neighbor: tree[node])
            {
                degree[neighbor]-=1;
                if(degree[neighbor]==1)
                {
                    new_leaves.push_back(neighbor);
                }
                degree[node]=0;
            }
        }
        count+=new_leaves.size();
        leaves=new_leaves;
    }
    for(auto center:leaves)
    {
        cout<<center<<" ";
    }
}

int main()
{
    int v,n,neighbours;
    bool ok=true;
    cout<<"Enter number of node"<<endl;
    cin>>v;
    vector<int> tree[v];
    for(int i=0;i<v;i++)
    {
        cout<<"Enter degree of node "<<i<<endl;
        cin>>n;
        cout<<"Enter neighbours of node "<<i<<endl;
        for(int j=0;j<n;j++)
        {
            cin>>neighbours;
            tree[i].push_back(neighbours);
        }
    }
    center(tree,v);
}

// Example:
// 1 1
// 3 0 3 4
// 1 3
// 4 1 2 6 7
// 3 1 5 8
// 1 4
// 2 3 9
// 1 3
// 1 4
// 1 6