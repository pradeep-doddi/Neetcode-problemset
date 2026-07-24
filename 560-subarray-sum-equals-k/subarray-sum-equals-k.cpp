class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();

        vector<int> prefix(n + 1, 0);

        for(int i = 0; i < n; i++){
            prefix[i + 1] = prefix[i] + nums[i];
        }

        map<int,int> mp;

        mp[0] = 1;

        int count = 0;

        for(int i = 1; i <= n; i++){

            if(mp.find(prefix[i] - k) != mp.end()){
                count += mp[prefix[i] - k];
            }

            mp[prefix[i]]++;
        }

        return count;
    }
};