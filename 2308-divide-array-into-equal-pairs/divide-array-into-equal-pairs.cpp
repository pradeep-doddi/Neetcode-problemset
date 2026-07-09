class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int>frq(5001,0);
        for(int i=0;i<nums.size();i++){
            frq[nums[i]] += 1;
        }
        for(int i=1;i<5001;i++){
            if(frq[i]%2 != 0 ) return false;
        }
        return true;

    }
};