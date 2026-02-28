class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        vector<int>less;
        vector<int>larg;
        vector<int>eq;
        for(auto i : nums){
            if(i<pivot) less.push_back(i);
            else if (i==pivot) eq.push_back(i);
            else larg.push_back(i);
        }
        for(auto i:less) ans.push_back(i);
        for(auto i : eq) ans.push_back(i);
        for(auto i : larg) ans.push_back(i);
        return ans;
        
    }
};