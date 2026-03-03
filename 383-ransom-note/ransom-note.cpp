class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>arr(26,0);
        for(auto i : magazine){
            arr[i-'a']++;
        }
        for(auto i:ransomNote){
            arr[i-'a']--;
            if(arr[i-'a']<0) return false;
        }
        return true;
    }
};