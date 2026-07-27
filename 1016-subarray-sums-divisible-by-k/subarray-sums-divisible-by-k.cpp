class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count =0 ;
        mp[0] =1;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            int rem = ((sum%k)+k)%k;
            if(mp.count(rem)){
                count += mp[rem];
            }
            mp[rem]+=1;
        }
        return count;
    }
};