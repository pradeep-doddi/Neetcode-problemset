class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxi=nums[0];
        int currentsum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                currentsum += nums[i];
            }
            else{
                currentsum=nums[i];
            }
            maxi=max(currentsum,maxi);
        }
        return maxi;
    }
};