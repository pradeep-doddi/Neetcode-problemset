class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>arr(nums.size()+1,0);
        int dup=0;
        int missing=0;
        for(int i=0;i<nums.size();i++){
            arr[nums[i]] += 1;
        }
        for(int i=1;i<arr.size();i++){
            if(arr[i]==0) missing= i;
            if(arr[i]==2) dup=i;
        }
        return {dup,missing};
    }
};