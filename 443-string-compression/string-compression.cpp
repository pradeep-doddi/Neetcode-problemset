class Solution {
public:
    int compress(vector<char>& chars) {
        int l=0;
        int r=0;
        int w=0;
        while(l<chars.size()){
            if(r<chars.size() && chars[l]==chars[r]){
                r++;
            }
            else{
                int count = r-l;
                chars[w]=chars[l];
                w++;
                if(count>1){
                string ans=to_string(count);
                for(int i=0;i<ans.size();i++){
                    chars[w]=ans[i];
                    w++;
                }

                }
                l=r;
            }
           
        }

        return w;
    }
};