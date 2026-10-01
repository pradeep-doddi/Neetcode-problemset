class Solution {
public:
    bool cansplit(vector<int>nums,int mid, int op){
        int ans =0;
        for(auto x : nums){
            ans += (x-1)/mid;
        }
        if(ans<=op){
            return true;
        }
        return false;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<high){
            int mid = low +(high-low)/2;
            if(cansplit(nums,mid,maxOperations)){
                high=mid;
            }
            else{
                low = mid+1;
            }
        }
        return high;
    }
};