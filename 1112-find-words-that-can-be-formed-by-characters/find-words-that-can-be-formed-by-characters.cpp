class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
      vector<int>arr(26,0);
      int count=0;
      for(auto i : chars){
        arr[i-'a'] += 1;
      }
      for(auto i : words){
        string ans=i;
        vector<int>temp=arr;
        bool flag=false;
        for(int j=0;j<ans.size();j++){
            if((--temp[ans[j]-'a']) < 0 ){
                flag=true;
                break;
            } 
        }
        if(!flag) count += ans.size();
      }
      return count;  
    }
};