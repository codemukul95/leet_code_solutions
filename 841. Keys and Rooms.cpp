class Solution {
public:
    void visitRooms(vector<vector<int>> &rooms, int curr_room, vector<bool> &visited){
        if(visited[curr_room] == false){
            visited[curr_room] = true;
            for(int i=0;i<rooms[curr_room].size();i++){
                visitRooms(rooms,rooms[curr_room][i],visited);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n,false);
        
        visitRooms(rooms,0,visited);
        for(int i=0;i<n;i++ ){
            if(visited[i] == false)
                return false;
        }
        return true;
        
    }
};
