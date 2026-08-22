class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        const int MOD = 1000000007;

        vector<int> pow2(nums.size());

        pow2[0] = 1;

        for(int i = 1; i < nums.size(); i++) {
            pow2[i] = (pow2[i - 1] * 2LL) % MOD;
        }

        int left = 0;
        int right = nums.size() - 1;
        int ans = 0;

        while(left <= right) {
            if(nums[left] + nums[right] <= target) {
                ans = (ans + pow2[right - left]) % MOD;
                left++;
            }
            else {
                right--;
            }
        }

        return ans;
    }
};
