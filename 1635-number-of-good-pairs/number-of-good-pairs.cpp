class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int>freq(101,0);
        int count=0;
        for(auto i:nums){
            freq[i]++;
        }
        for(auto i : freq){
            if(i>1){
                count += (i*(i-1))/2;
            }
        }
        return count;
    }
};