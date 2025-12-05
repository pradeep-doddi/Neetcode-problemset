class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>arr(nums.size()*2,0);
        for(int i=0;i<arr.size();i++){
            arr[i]=nums[i%nums.size()];
        }
        return arr;
    }
};