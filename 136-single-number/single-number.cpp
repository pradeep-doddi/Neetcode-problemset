class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        int i=0;
        while(i<nums.size()){
            ans = ans^nums[i];
            i++;
        }
        return ans;
    }
};