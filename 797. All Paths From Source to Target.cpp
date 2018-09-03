#define pb push_back

class Solution {
public:
    void getPath(vector<vector<int>> &graph,int n, int currNode, vector<int> path, vector<vector<int>> & allPaths ){
        if(currNode == n){
            path.pb(currNode);
            allPaths.pb(path);
            return;
        }
        else{
            path.pb(currNode);
            for(int j=0;j<graph[currNode].size();j++){
                getPath(graph,n,graph[currNode][j],path,allPaths);
            }
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> allPaths;
        vector<int> path;
        int n = graph.size()-1;
        path.pb(0);
        for(int j=0;j<graph[0].size();j++){
            getPath(graph,n,graph[0][j],path,allPaths);
        }
        return allPaths;
    }
};
