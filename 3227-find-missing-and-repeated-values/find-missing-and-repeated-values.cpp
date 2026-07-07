class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       int n=grid.size();
       int dup=0;
       int mis=0;
       vector<int>ans(n*n+1,0);
       for(int i=0;i<grid[0].size();i++){
        for(int j=0;j<grid.size();j++){
            ans[grid[i][j]] += 1;
        }
       }
       for(int i=1;i<ans.size();i++){
        if(ans[i]==0) mis= i;
        if(ans[i]==2) dup= i;
       }
       return {dup,mis};
    }
};