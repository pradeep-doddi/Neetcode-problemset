class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        set<pair<int,int>> visited;
        
        visited.insert({0,0}); // starting point
        
        for(char i : path){
            if(i == 'N') y++;
            else if(i == 'S') y--;
            else if(i == 'E') x++;
            else if(i == 'W') x--;
            
            if(visited.count({x,y})) return true;
            
            visited.insert({x,y});
        }
        
        return false;
    }
};