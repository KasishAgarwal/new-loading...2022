/* Problem statement : 
    You are given a directed graph of n nodes numbered from 0 to n - 1, where each node has at most one outgoing edge.
    The graph is represented with a given 0-indexed array edges of size n, indicating that there is a directed edge from node i to node edges[i]. If there is no outgoing edge from node i, then edges[i] == -1.
    Return the length of the longest cycle in the graph. If no cycle exists, return -1.
*/

class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
        vector<bool> vis(n,false);
        //vis[0]=;
        int len=-1,g;
        for(int i=0;i<n;i++)
        {
            
            if(!vis[i])
            {
               //vector<bool> vis1(n,false);
                unordered_map<int,int> mp;
                vis[i]=true;
                //vis1[i]=true;
                mp[i]=1;
                g=1;
                while(edges[i]!=-1)
                {
                    i=edges[i];
                   // cout<<i<<"@";
                    if(vis[i])
                    {
                        if(mp.find(i)==mp.end())break;
                        len=max(len,g-mp[i]+1);break;
                    }
                    else
                    {
                        g++;
                        vis[i]=true;
                        mp[i]=g;
                    }
                }
            }
            
        }
        return len;
    }
};