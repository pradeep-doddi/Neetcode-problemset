class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans=0;
        vector<int>expected;
        for(auto i : heights){
            expected.push_back(i);
        }
        sort(expected.begin(),expected.end());
        for(auto i : expected){
            cout<<i<<" ";
        }
        for(int i=0;i<heights.size();i++){
            if(heights[i] != expected[i]){
                ans += 1;
            }
        }
        return ans;
    }
};