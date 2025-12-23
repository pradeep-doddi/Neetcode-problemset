class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            string first=words[i];
            bool flag= false;
            for(int j=0;j<words.size();j++){
                if(i != j && words[j].find(first) != string::npos ){
                    if(flag==false){
                        ans.push_back(first);
                        flag=true;
                    }
                    

                }
            }
           
        }
         return ans;   
    }
};