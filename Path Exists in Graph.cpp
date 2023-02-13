#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>adj[n];
        vector<int>visited(n+1,0);
        for(int i=0; i<edges.size(); i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
            
        }
        stack<int>st;
        st.push(source);
        while(!st.empty())
        {
            int node = st.top();
            visited[node] = 1;
            st.pop();
            if(node == destination) return 1;
            for(auto &edge : adj[node]){
                if(!visited[edge]){
                    st.push(edge);
                }
            }
        }
        return 0;
        
    }
};
int main(){

}