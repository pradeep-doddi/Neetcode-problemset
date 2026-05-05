class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=1;
        int maxi=1;
        int mini=1;
        int ans2=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                ans += 1;
            }
            else{
                maxi=max(ans,maxi);
                ans=1;
            }
        }
        ans=max(maxi,ans);
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                ans2 += 1;
            }
            else{
                mini=max(ans2,mini);
                ans2=1;
            }
        }
        mini=max(ans2,mini);
        return max(ans,mini);

    }
};