class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i=0;
        int j=1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                nums[i]=nums[i]*2;
                nums[j]=0;
            }
            i++;
            j++;
        }
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                nums[index++]=nums[i];
            }
        }
        while(index<nums.size()){
            nums[index++]=0;
        }

        return nums;
    }
};