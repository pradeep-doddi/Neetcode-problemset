class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = INT_MAX;
        for(int i = 0; i <= nums.size() - k; i++) {
            int difference = nums[i + k - 1] - nums[i];
            ans = min(ans, difference);
        }
        return ans;
    }
};
