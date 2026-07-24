class Solution {
public:
    int specialArray(vector<int>& nums) {
        vector<int>arr(nums.size()+1);
        for(auto i : nums){
            if(i>=nums.size()){
                arr[nums.size()]++;
            }
            else{
                arr[i]++;
            }
        }
        int prefixsum=0;
        for(int i=nums.size();i>=0;i--){
            prefixsum += arr[i];
            if(prefixsum==i){
                return i;
            }
        }
        return -1;
    }
};