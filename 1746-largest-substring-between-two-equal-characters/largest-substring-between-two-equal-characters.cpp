class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int>index_Arr(27,-1);
        int ans=-1;
        for(int i=0;i<s.size();i++){
            if(index_Arr[s[i]-'a']==-1){
                index_Arr[s[i]-'a']=i;
            }
            else{
                ans=max(ans,i-index_Arr[s[i]-'a']-1);
            }
        }
        return ans;
    }
};