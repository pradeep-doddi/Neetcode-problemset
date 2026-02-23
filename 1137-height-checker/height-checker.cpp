class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans=0;
        int idx=0;
        vector<int>exp(101,0);
        for(auto i : heights ) exp[i]++;
        for(int i=1;i<exp.size();i++){
            while(exp[i]--){
                if( i != heights[idx]){
                    ans += 1;
                }
                idx = idx+1;
            }
        }
        return ans;
    }
};