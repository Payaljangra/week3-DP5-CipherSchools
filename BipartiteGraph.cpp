#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<vector<int>> &graph, int col , vector<int> &colour , int node){
        colour[node] = col;
        for(auto it:graph[node]){
            if(colour[it] == -1){
                if(check(graph ,!col , colour , it) == false) return false;
            }
            else{
                if(col == colour[it]) return false;
            }
        }
        return true;
    }


    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> colour(n, -1);
        for(int i =0;i<n;++i){
            if(colour[i] == -1){
                if(check(graph , 1 , colour , i) == false) return false;
            }
        }
        return true;
    }
};
int main()
{
    
}