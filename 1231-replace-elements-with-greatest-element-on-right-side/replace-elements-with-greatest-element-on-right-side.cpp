class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int largest=-1;
        vector<int>a(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            a[i]=largest;
            largest=max(largest,arr[i]);
        }
        return a;
    }
};