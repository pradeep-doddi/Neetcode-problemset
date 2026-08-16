class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long ans = 0 ;
        for(auto x : nums){
            ans = ans^x;
        }
        int a =0;
        int b=0;
        long long  diff = ans & -ans;
        for(auto n : nums){
            if(n&diff){
                a ^= n;
            }
            else{
                b ^= n;
            }
        }
        return {a,b};


    }
};