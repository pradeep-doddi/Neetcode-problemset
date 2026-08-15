class Solution {
public:
    string simplifyPath(string path) {
        vector<string>ans;
        stringstream ss(path);
        string word;
        string res;
        while(getline(ss,word,'/')){
            if(word=="" || word=="."){
                continue;
            }
            else if( word==".."){
                if(!ans.empty())
                    ans.pop_back();
            }
            else{
                ans.push_back(word);
            }
        }
        for(auto i : ans){
            res += '/';
            res += i;
        }
        if(res.empty()){
            return "/";
        }
        return res;

    }
};