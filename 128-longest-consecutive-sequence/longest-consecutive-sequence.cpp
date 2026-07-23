class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int maxi=0;
        for(auto it : st){
            if(!st.count(it-1)){
                int curr=it;
                int len=0;
                while(st.count(curr)){
                    curr++;
                    len++;
                }
                maxi=max(maxi,len);
            }
        }
        return maxi;
    }
};