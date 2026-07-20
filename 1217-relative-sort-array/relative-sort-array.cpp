class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>arr(10001,0);
        vector<int>ans;
        for(auto i : arr1){
            arr[i] += 1;
        }
        for(int i = 0;i<arr2.size();i++){
            while(arr[arr2[i]]--){
                ans.push_back(arr2[i]);
            }
        }
        for(int i =0 ;i<arr.size();i++){
             while(arr[i]>0 && arr[i]--){
                ans.push_back(i);
             }
        }
        return ans;
    }
};